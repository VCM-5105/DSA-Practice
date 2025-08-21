#include<iostream>
using namespace std;
#define MIN_SIZE -1;
class Stack{
    private:
    int capacity;
    int *arr;
    int top;
    public:
    Stack(int c){
        this->capacity=c;
        this->arr= new int [c];
        this->top==-1;

    }
    void push(int item){
        if(this->top==this->capacity-1){
            cout<<"over flow";
            return;
        }
        else{
            this->top++;
            this->arr[this->top]=item;

        }

    }
    int pop(){
        if(this->top==-1){
            cout<<"underflow";
            return MIN_SIZE;
        }
        
             this->top--;
        
    }
    int gettop(){
        if (this->top==-1)
        {
            cout<<"underflow top can't be assessed";
            return MIN_SIZE;
        }
        return this->arr[this->top];
        
    }
    int size(){
        return this->top+1;
    }
    bool isFull(){
        return this->top==this->capacity-1;
    }
    bool isEmpty(){
        return this->top==-1;
    }
    int peek(){
        return this->arr[this->top];
    }


};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.gettop()<<endl;
    st.pop();
    cout<<st.gettop()<<endl;
    cout<<st.size();
    cout<<st.isEmpty();
    st.isFull();
    cout<<st.peek();
    return 0;
}