#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertion(Node* &head,int val){
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;

}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    print(head);
    return 0;
    

}