#include<iostream>
using namespace std;

int binary_search(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        } else if (arr[mid]>key){
            end=mid-1;
        } else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}


int main(){
    int arr[6]={1,2,3,3,4,5};
    int size=6;
    int key=6;
    cout<<binary_search(arr,key,size);
    return 0;
}