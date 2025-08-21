#include<iostream>

using namespace std;

int largest3(int arr[], int size){

    int first,second,third;
        if(size<3){
        cout<<"Invalid size";
        return 0;
    }
    third=second=first= INT16_MIN;
    for(int i=0;i<=size;i++){
        if(arr[i]>first){

            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second&& arr[i]!=first){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third && arr[i]!=second){
            third=arr[i];
        }
        
    }
   cout<<"The 3 largest element are"<<first<<" "<<second<<" "<<third; 
    
   
}
int main(){
    
        int arr[]={2,6,58,7,9,4};
        int size=sizeof(arr)/sizeof(int);
        largest3(arr,size);
        return 0;
}