#include<iostream>
using namespace std;

void inputArray(int *arr, int n){
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
}
void outputArray(int *arr ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void selectionsort(int *arr,int n){
    //this for loop is for number of comparisions
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;    // this we assume that at this position there is the minimum element 
        //this is for number of comparisions
        for(int j=i+1;j<=n-1;j++){
            
            if(arr[j]<arr[min_index]){     //needs updation
               min_index=j;
            }
        }
       int  temp=arr[i];               //this we swap the values
       arr[i]=arr[min_index];
       arr[min_index]=temp;
    }

    cout<<"sorted array looks like: ";
}
int main(){
  int n;
  cout<<"Enter the size of array";
  cin>>n;
  int arr[n];
  inputArray(arr,n);
  outputArray(arr,n);
  selectionsort(arr,n);
  
  outputArray(arr,n);

  return 0;
}