#include<iostream>
using namespace std;
/* for traversing
  set k=lb
  repeat steps 3and 4 while k<=ub
  apply the process to la[k]
  update k=k
  +1 exit*/

  void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;

}

void bubblesort(int *A,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++) {
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
} 
void insertionsort(int *A,int n){
    int key,i,j;
    for(int i=1;i<n-1;i++){
        key=A[i];
        j=i-1;
        while(j>=0&&key<A[j]){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
void selectionsort(int *A,int n){
    for(int i=0;i<=n-1;i++){
        int indexMin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[indexMin]){
                indexMin=j;
            }

        }
        int temp=A[i];
        A[i]=A[indexMin];
        A[indexMin]=temp;
    }
}
void merge(int *A,int mid,int low,int high){
    int i,j,k,B[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while (j<=high)
    {
        B[k]=A[j];
        j++;
        k++;
    }
    for (int  i = 0; i < high; i++)
    {
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
//    selectionsort(A,n);
//    printArray(A,n);

   mergesort(A,0,6);
   printArray(A,n);
// bubblesort(A,n);

//     printArray(A,n);
//     insertionsort(A,n);
//     printArray(A,n);
    return 0;
}