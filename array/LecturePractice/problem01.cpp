#include<iostream>
#include<vector>
using namespace std;

void InputArray(int *A,int *B,int m,int n){
    cout<<"Enter the value of 1st array"<<endl;
    for(int i=0;i<m;i++){
        cin>>A[i];
    }
    cout<<"Enter the value of 2nd array"<<endl;
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
}
void merge(int *A,int *B,int *C,int m,int n){
    int i,j,k;
    i=0;
    j=0;
    k=0;

    while(i<m&&j<n){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++,k++;
        }else{
            C[k]=B[j];
            j++,k++;
        }
    }
    while(i<m){
        C[k]=A[i];
        i++,k++;
    }
    while(j<n){
        C[k]=B[j];
        k++,j++;
    }
}
void PrintArray(int C[],int h){
    for(int i=0;i<h;i++){
        cout<<C[i];
    }
}

int main(){
    int m,n;
    cout<<"Enter the size of an array"<<endl;
    cin>>m;
    cin>>n;
    int h=m+n;

    int A[m],B[n],C[h];
    InputArray(A,B,m,n);
    merge(A,B,C,m,n);
    PrintArray(C,h);
    return 0;
}