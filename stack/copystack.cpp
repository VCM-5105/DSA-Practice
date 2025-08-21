#include<iostream>
#include<stack>
using namespace std;

stack<int>copystack(stack<int>&input){
    //create a function with name copy stack with return type int and pass the input as the input stack from main function
    stack<int>temp;
    while(not input.empty()){
        int curr= input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int>resultant;
    while (not temp.empty()){
        int curr= temp.top();
        temp.pop();
        resultant.push(curr);

    }
    return resultant;
    

}



int main(){
    stack<int>st;//st is an input stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
   
    cout<<"The content of final stack is"<<endl;
    stack<int>final= copystack(st);
     while(not final.empty()){
        int curr=final.top();
        final.pop();
        cout<<curr<<"\t";
    }
    return 0;
}