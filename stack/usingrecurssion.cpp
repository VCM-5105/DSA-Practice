#include<iostream>
#include<stack>
using namespace std;

void copystack(stack<int>&input,stack<int>&result){
    if(input.empty()){
        return;
    }
     int curr=input.top();
     input.pop();
     copystack(input,result);
     result.push(curr);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int>res;
    copystack(st,res);
    while(!res.empty()){
        cout<<res.top()<<"\t";
        res.pop();
    }
    return 0;
}