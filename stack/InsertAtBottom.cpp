#include<iostream>
#include<stack>
using namespace std;

// void insert(stack<int>&input,int n){
//     stack<int>temp;
//     while(!input.empty()){
//         int curr= input.top();
//         input.pop();
//         temp.push(curr);
//     }
//     input.push(n);
//     while(!temp.empty()){
//         int curr= temp.top();
//         temp.pop();
//         input.push(curr);
//     }
    
// }
void insertion(stack<int>&input,int n){
    if(input.empty()){
        input.push(n);
        return;
    }
    int curr= input.top();
    input.pop();
    insertion(input,n);
    input.push(curr);
    
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertion(st,10);
    while(!st.empty()){
        cout<<st.top()<<"\t";
        st.pop();
    }
    return 0;
}