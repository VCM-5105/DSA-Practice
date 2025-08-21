#include<iostream>
using  namespace std;


void display(int arr[], int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int insertedArr(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        cout<<"No space insertion is not possible";
    }
    else{
        for(int i=size-1;i>=index;i--){         //size-1 because 0 based indexing
            arr[i+1]=arr[i];

        }
        arr[index]=element;
           
    }
    return 1;
}

 int main(){
   int arr[100]={2,3,56,67,89};
   int element=85,index=2;
   int capacity=100,size =5;
  display(arr,size);
  insertedArr( arr, size, element, capacity, index);
  size++;
  display(arr,size);
   
    return 0;
 }