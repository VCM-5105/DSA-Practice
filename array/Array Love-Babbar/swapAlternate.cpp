#include<iostream>
using namespace std;



void alternate_Swap(int *arr,int n){
    for (int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
            // int temp= arr[i];
            // arr[i]=arr[i+1];
            // arr[i+1]=temp;
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

void inputArray(int *arr,int n){
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void PrintArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    cout<<"Array before operation"<<endl;
    PrintArray(arr,n);
    cout<<"\nArray after the operation"<<endl;
    alternate_Swap(arr,n);
    return 0;
}