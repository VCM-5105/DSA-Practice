#include<iostream>
using namespace std;

int main(){
    int arr[100]={2,3,4,5,6,8,9};
    int element=5;
    int size =sizeof(arr)/sizeof(int);
    for(int i=0;i<=size;i++){
        if(arr[i]==element){
            cout<<i;
            break;
        }
      
    }
      
            // cout<<"Element not found"<<endl;
        
    return 0;
}