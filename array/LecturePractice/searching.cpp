#include<iostream>
using namespace std;
int main(){
    int n,arr[n];
    cout<<"Enter the size of an array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    int value;
    cout<<"Enter the value of the element to search";
    cin>>value;
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            cout<<"The position of value is"<<i;
        }
        
    }
    return 0;

}