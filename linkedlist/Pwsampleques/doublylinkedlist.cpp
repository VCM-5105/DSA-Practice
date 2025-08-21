#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

void insertatbeginning(Node* &head,int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    newNode->prev=NULL;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"   ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

void insertAtRandom(Node*& head, int val, int pos) {
    Node* newNode = new Node(val);
    
    newNode->next = NULL;
    newNode->prev = NULL;

    if (pos == 0) {
        insertatbeginning(head, val);
        return;
    }

    Node* temp = head;
    int current_pos = 0;

    while (current_pos != pos - 1 && temp != nullptr) {
        temp = temp->next;
        current_pos++;
    }

    if (temp == nullptr) {
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

void deleteAtRandom(Node*& head, int pos) {
    if (pos == 0) {
         Node*temp=head;
         head=head->next;
        free(temp);
    }

    Node* temp = head;
    int current_pos = 0;

    while (current_pos != pos && temp != NULL) {
        temp = temp->next;
        current_pos++;
    }

    if (temp == NULL) {
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}



int main(){
    Node* head= NULL;
    insertatbeginning(head,2);
    insertatbeginning(head,3);
    display(head);
    insertAtRandom(head,2,1);
    display(head);
    deleteAtRandom(head,2);
    display(head);
    return 0;
}
