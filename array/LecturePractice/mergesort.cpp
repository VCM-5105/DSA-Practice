#include<iostream>
using namespace std;

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;

}

void merge(int *A,int low,int mid,int high){
     int i,k,j,B[high+1];
     i=low;
     j=mid+1;
     k=low;

     while(i<=mid &&j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;k++;

        }
     }
     while(i<=mid){
        B[k]=A[i];
        k++;i++;
     }
     while(j<=high){
        B[k]=A[j];
        j++;k++;
     }
     for(int i=low;i<=high;i++){
        A[i]=B[i];
     }
}

void mergesort(int *A,int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}



int main(){
    int A[]={4,2,3,6,1,8};
    int n=6;
    printArray(A,n);
   // selectionSort(A,n);
   mergesort(A,0,6);
    printArray(A,n);
    return 0;
}