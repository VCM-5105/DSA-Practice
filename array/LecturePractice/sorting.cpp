#include<iostream>

using namespace std;
int main(){
    int n,arr[n],temp;
    cout<<"Enter the size of an array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\n The sorted array is:  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;

}