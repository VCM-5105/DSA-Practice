#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.pop();
    st.push(1);
    st.push(2);
    cout<<st.top();
    st.emplace();
    return 0;
}