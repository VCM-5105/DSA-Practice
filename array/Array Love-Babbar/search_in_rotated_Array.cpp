#include<iostream>
using namespace std;

int binary_search(int arr[],int key,int size,int start,int end){
     start=0;
     end=size-1;
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

int findPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        } else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int search_in_Rotated(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int pivot=findPivot(arr,n);
        if(arr[pivot]<key && key<arr[n-1]){
            binary_search(arr,key,n,pivot,n-1);
        } else{
            binary_search(arr,key,n,0,pivot-1);
        }
    
}

int  main(){
    int arr[]={7,9,1,2,3};
    int result=search_in_Rotated(arr,5,7);
    cout<<result;
    return 0;
}