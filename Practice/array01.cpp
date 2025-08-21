#include<iostream>
using namespace std;

void InputArray(int *arr,int n){
    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int binarySearch(int *arr,int key,int n){
    
    int low=0;
    int high=n-1;
    int flag;

    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            flag= mid;
            break;
        }
        if(arr[mid]<key){
            low=mid+1;
        } else{
            high=mid-1;
        }

    }
    return flag;
}

int main(){

    cout<<"Enter the size of an array";
    int n,key;
    cin>>n;

    int arr[n];
    InputArray(arr,n);
    cout<<"Enter the key to search in an array : ";
    cin>>key;
    cout<<"The key is at "<<binarySearch(arr,key,n)<<"th position"<<endl;
    return 0;
}