#include<iostream>
using namespace std;

int first_occurence(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        } else if (arr[mid]>key){
            end=mid-1;
        } else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int last_occurence(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        } else if (arr[mid]>key){
            end=mid-1;
        } else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[6]={1,2,3,3,4,5};
    int size=6;
    int key=3;
    cout<<"First occurence is: ";
    cout<<first_occurence(arr,key,size)<<endl;
    cout<<"Last Occurence is: ";
    cout<<last_occurence(arr,key,size);
    return 0;
}