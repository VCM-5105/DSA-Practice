#include<iostream>
#include<stack>
using namespace std;

void insertatrandom(stack<int>&input,int index,int n){
    stack<int>temp;
    int currsize=0;
    while(currsize!=index){
        int curr= input.top();
        input.pop();
        temp.push(curr);
        currsize++;
    }
    input.push(n);
    while(!temp.empty()){
        int curr= temp.top();
        temp.pop();
        input.push(curr);
    }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertatrandom(st,2,10);
    while(!st.empty()){
        cout<<st.top()<<"\t";
        st.pop();
    }
    return 0;
}