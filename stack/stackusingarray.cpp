#include <iostream>
using namespace std;

class Stack
{
private:
    int capacity;
    int *arr;
    int top;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];// dynamically memory alloacated
        this->top = -1; //initialising with -1 
    }
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "The given stack is overflow";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop()
    {
        if (this->top == -1)
        {
            cout << "Underflow";
            return INT32_MIN;
        }
        this->top--;
    }
    int gettop()
    {
        if (this->top == -1)
        {
            cout << "Underflow";
            return INT32_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty()
    {
        return this->top == -1;
    }

    bool isFull()
    {
        return this->top == this->capacity - 1;
    }

    int size()
    {
        return this->top + 1;
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
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
    

    cout<<st.isEmpty();

    return 0;
}