#include<iostream>
using namespace std;

void inputArray(int *arr,int n){
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void outputArray(int *arr,int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

void bubblesort(int *arr,int n){
    int issorted=0;
    for(int i=0;i<=n-1;i++){
        cout<<"The number of passes " <<i+1;
        issorted=1;
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted==1){
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    inputArray(arr,n);
    bubblesort(arr,n);
    outputArray(arr,n);
}