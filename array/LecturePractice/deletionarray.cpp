#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void deletion(int arr[],int index,int size,int capacity){
    if(size+1>=capacity){
        cout<<"No space";
    }
    else{
        for(int i=index;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    }

}

int main(){
    int arr[50]={2,3,4,5,6};
    int size=5,index=2;
    display(arr,5);
     deletion( arr, index, size, 100);
    size--;
    display(arr,size);
    return 0;
}
