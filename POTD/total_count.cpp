#include<iostream>
using namespace std;

int totalCount(int arr[], int k){
    int dividend=0;
        int count=0;
        int temp=0;
        for(int i=0;i<4;i++){
            dividend= arr[i]/k;
            if(arr[i]%k!=0){
                count+=dividend+1;
            } else{
                count+=dividend;
            }
        }
        return count;
}

int main(){
    int arr[]={5,8,10,13};
    int key=3;
    cout<<"The totall count of an array is: "<<totalCount(arr,key)<<endl;
    return 0;
}