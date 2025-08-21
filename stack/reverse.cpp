#include<iostream>
#include<stack>
using namespace std;

void reverse(stack<int> &st){
    stack<int> revesestack;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        revesestack.push(curr);
    }
    
    
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    reverse(st);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<"\t";
    }
    return 0;
}