#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int data){
      value=data;
      next=NULL;
    }
};

int main(){
    Node *n= new Node(2);
    cout<<n->value<<"  "<<n->next<<endl;
    return 0;
}