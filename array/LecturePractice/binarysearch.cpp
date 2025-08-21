#include<iostream>
using namespace std;

int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9,10};
    int low=0,high, mid;
    int size= sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    high=size-1;
    
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==5){
            cout<<mid;
            // break;
        }
        if(arr[mid]<5){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    // cout<<"Element not found"<<endl;
    return 0;
}
