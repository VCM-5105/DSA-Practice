#include<iostream>
using namespace std;

void printThreelargest(int *arr,int size){
    int first,second,third;
    if(size<3){
        cout<<"Very small size";
    }
    else{
        first=second=third= INT16_MIN;
        for(int i=0;i<size;i++){
            if(arr[i]>first&&arr[i]!=size){
                third=second;
                second=first;
                first=arr[i];
            }
            else if(arr[i]>second&&arr[i]!=first){
                third=second;
                second=arr[i];
            }
            else if(arr[i]>third&&arr[i]!=second){
                third=arr[i];
            }
        }
        cout<<"First highest is"<<first<<"\nSecond highest is "<<second<<"\nThird highest is "<<third<<endl;
    }
}

void inputArray(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    printThreelargest(arr,n);
    return 0;
}