#include<iostream>
using namespace std;

void inputArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

// void printSecondLargest(int *arr,int n){
//     int first,second;
//     if(n<2){
//         cout<<"Very small size";
//     } else{
//         first=second=INT16_MIN;
//         for(int i=0;i<n;i++){
//             if(arr[i]>first){
//                 second=first;
//                 first=arr[i];
//             }
//             else if(arr[i]>second&&arr[i]!=first){
//                 second=arr[i];
//             }
//         }
//         cout<<"second largest element is :"<<second;
//     }

// }

void sortinDescending(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void outputArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

// void secondlargest(int*arr,int n){
//     cout<<arr[1];
// }

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: "<<endl;
    inputArray(arr,n);
    // printSecondLargest(arr,n);
    sortinDescending(arr,n);
    outputArray(arr,n);
    cout<<"\nSecond largest element is "<<arr[1];
    // secondlargest(arr,n);
    return 0;

}