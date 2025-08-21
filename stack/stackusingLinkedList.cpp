#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int data){
        this->value=data;
        this->next=NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->currSize==this->capacity;
    }
    void push(int data){
        if(this->currSize==this->capacity){
            cout<<"Overflow";
            return;
        }
        Node *newnode=new Node(data);
        newnode->next=this->head;
        this->head=newnode;
        this->currSize++;


    }
    int pop(){
        if(this->head==NULL){
            cout<<"underflow";
            return INT32_MIN;
        }
        // method 01 of doing things
        Node* temp=this->head;
        this->head=this->head->next;
        free(temp);

        // method 02 of doing same this is
        // Node* newHead=this->head->next;
        // this->head->next=NULL;
        // Node* toBeRemoved=this->head;
        // int result=toBeRemoved->value;
        // delete toBeRemoved;
        // this->head=newHead;
        // return result;

        this->currSize--;
    }

    int size(){
        return this->currSize;
    }
    int gettop(){
        if(this->head==NULL){
            cout<<"underflow";
            return INT32_MIN;
        }
        return this->head->value;
    }

    
};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(14);
     cout<<st.size()<<endl;
    cout << st.gettop() << endl;
    st.pop();
    cout << st.gettop() << endl;
    st.pop();
    cout << st.gettop() << endl;
    st.pop();
    cout << st.gettop() << endl;
    st.pop();
    cout << st.gettop() << endl;
    st.pop();
    cout<<st.size();
    return 0;
    
}