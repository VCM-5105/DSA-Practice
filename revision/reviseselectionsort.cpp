#include<iostream>
using namespace std;

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;

}

void selectionSort(int *A,int n){
    int indexofMin;
    for(int i=0;i<n-1;i++){
        indexofMin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[indexofMin]){
                indexofMin=j;
            }
        }
        int temp=A[i];
        A[i]=A[indexofMin];
        A[indexofMin]=temp;
    }
}

int main(){
    int A[]={4,2,3,6,1,8};
    int n=6;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
    return 0;
}