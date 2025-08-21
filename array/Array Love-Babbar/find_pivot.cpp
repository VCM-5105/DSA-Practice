#include<iostream>
using namespace std;

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
// 2nd approach
        // while(s<e){
        //     if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
        //         return mid;
        //     }
        //     if(arr[mid-1]<arr[mid]&& arr[mid+1]<arr[mid]){
        //         s=mid+1;
        //     } else{
        //         e=mid;
        //     }
        //     mid=s+(e-s)/2;
        // }
        // return mid;
}
int main(){
    int arr[]={6,7,9,1,2,3};
    cout<<"The pivot element present at "<<findPivot(arr,6)<<"th index"<<endl;
    
   
    return 0;
}