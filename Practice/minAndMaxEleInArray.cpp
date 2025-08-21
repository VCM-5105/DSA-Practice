#include<iostream>
#include<vector>
using namespace std;

int minAndMax(int *arr,int n){
    int min=INT32_MIN;
    int max=INT32_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            
        }
    }
}

int main(){ 
   int n;
   cout<<"Enter the size of an array: ";
   cin>>n;

   int arr[n];
   minAndMax(arr,n);

    return 0;
}