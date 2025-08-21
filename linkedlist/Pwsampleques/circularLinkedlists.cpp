#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int data) {
        val = data;
        prev = nullptr;
        next = nullptr;
    }
};

void insertatbeginning(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;
    head = newNode;
}

void display(Node* head) {
    if (head == nullptr) {
        cout << "NULL" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->val << "   ";
        temp = temp->next;
    } while (temp != head);

    cout << "HEAD" << endl;
}

void insertAtRandom(Node*& head, int val, int pos) {
    Node* newNode = new Node(val);

    if (pos == 0) {
        insertatbeginning(head, val);
        return;
    }

    Node* temp = head;
    int current_pos = 0;

    while (current_pos != pos - 1 && temp->next != head) {
        temp = temp->next;
        current_pos++;
    }

    if (current_pos != pos - 1 && temp->next == head) {
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteAtRandom(Node*& head, int pos) {
    if (head == nullptr) {
        return;
    }

    if (pos == 0) {
        Node* temp = head;
        Node* last = head->prev;

        if (head->next == head) { 
            head = nullptr;
            free(temp);
            return;
        }

        head = head->next;
        last->next = head;
        head->prev = last;
        free(temp);
        return;
    }

    Node* temp = head;
    int current_pos = 0;

    while (current_pos != pos && temp->next != head) {
        temp = temp->next;
        current_pos++;
    }

    if (temp->next == head && current_pos != pos) {
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    free(temp);
}

int main() {
    Node* head = nullptr;
    insertatbeginning(head, 2);
    insertatbeginning(head, 3);
    display(head);
    insertAtRandom(head, 2, 1);
    display(head);
    deleteAtRandom(head, 2);
    display(head);
    return 0;
}
