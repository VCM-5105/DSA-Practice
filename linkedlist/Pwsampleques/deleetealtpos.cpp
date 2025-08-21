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

class Linkedlist{
    public:
    Node* head;
    Linkedlist(){
        head=NULL;
    }
    void insertionEle(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
void deletealternate(Node* &head){
    Node* curr=head;
    while (curr!=NULL&&curr->next!=NULL)
    {
        Node* temp= curr->next;
        curr->next=curr->next->next;
        free(temp);
        curr=curr->next;
    }
     

}

int main(){
    Linkedlist l1;
    l1.insertionEle(1);
    l1.insertionEle(2);
    l1.insertionEle(3);
    l1.insertionEle(4);
    l1.insertionEle(5);
    l1.insertionEle(6);
    l1.display();
    deletealternate(l1.head);
    l1.display();
    return 0;


}