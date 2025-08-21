#include<iostream>
using namespace std;

void InputArray(int * arr, int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void PrintArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

void ReversedArray(int *arr, int n){
int temp[n];
for(int i=0;i<n;i++){
    temp[i]=arr[n-i-1];
}
for(int i=0;i<n;i++){
    cout<<temp[i];          
}
    
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    InputArray(arr,n);
    cout<<"before reversing "<<endl;
    PrintArray(arr,n);
    cout<<"\nafter reversing"<<endl;
    ReversedArray(arr,n);

    return 0;

}