#include<iostream>
using namespace std;

void inputArray(int *arr,int n){
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void PrintArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int findUnique(int *arr,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];//take xor of all element of array
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    cout<<"The unique element in array is: "<<endl;
    int result=findUnique(arr,n);
    cout<<result;
    return 0;
}