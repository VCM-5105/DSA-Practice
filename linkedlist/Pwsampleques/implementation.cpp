#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
         val=data;
        next=NULL;
    }

};

void insertAtHead(Node* &head,int val){//pass by refrence as we are making changes to our linked lists
     Node* newNode= new Node(val);
     newNode->next=head;
     head=newNode;

}

void inserAtTail(Node* &head,int val){
    Node* newNode=new Node(val);
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;//new node in this case by default pointing to null as we have already declared next =null in cosntructor declaration

}

void display(Node* head){//pass by value as we are not making any changes 
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"   ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

void insertAtRandom(Node* &head,int val,int pos){
    Node* newNode= new Node(val);
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;

    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void deleteAtHead(Node* &head){
    Node*temp=head;
    head=head->next;
    free(temp);
}


void deleteAtTail(Node* &head){
    Node* second_last= head;
    while (second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    Node*temp=second_last->next;
    second_last->next=NULL;
}

void deleteAtRandom(Node* &head,int pos){
    Node* prev=head;
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    int current_pos=0;
    while(current_pos!=pos-1){
        prev=prev->next;
        current_pos++;
    }
    Node* temp=prev->next;
    prev->next=prev->next->next;
    free(temp);


}

int  main(){
   Node* head =NULL;
   insertAtHead(head,2);
   display(head);
   insertAtHead(head,1);
   display(head);
   inserAtTail(head,3);
   display(head);
   insertAtRandom(head,4,2);
   display(head);
//    deleteAtHead(head);
//    display(head);
//    deleteAtTail(head);
//    display(head);
deleteAtRandom(head,2);
display(head);
    return 0;
}


#include <iostream>
using namespace std;