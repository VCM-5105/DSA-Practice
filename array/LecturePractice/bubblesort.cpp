#include<iostream>
using namespace std;
 int main(){
    int arr[]={2,1,89,4,45,23,8};
    int size=sizeof(arr)/sizeof(int);
    cout<<size;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
    cout<<"FOR PRINTING THE SORTED ARRAY"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
 }