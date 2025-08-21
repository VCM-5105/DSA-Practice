#include<iostream>
using namespace std;
int main(){
    int arr[100]={2,3,4,5,8};
    int size=5;
    size++;
    int index=3;
    int temp=arr[2];
    arr[2]=45;
    arr[size-1]=temp;
    for(int i=0;i<=size-2;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}