#include<iostream>
using namespace std;


 int main(){
    // 01) traversal in array
    int n;
    cout<<"Enter the size of an array";
    cin>>n;
    int arr[n];

    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Before insertion"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    int size= sizeof(arr)/sizeof(int);
    cout<<"\nThe size of array is"<<size<<endl;

    // 02) inserrtion
    int element=45,index=2;
    for(int i=size;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size++;
 cout<<"After insertion"<<endl;
     for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
// 03) deletion
cout<<"\nAfter deletion"<<endl;
for(int i=index;i<=size;i++){
    arr[i]=arr[i+1];
}
size--;
 for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
 cout<<"\nSearching of an element through linear search"<<endl;

    //04) linear search
    int key=6;
    for(int i=0;i<=size;i++){
        if(key==arr[i]){
            cout<<"The location of key is "<<i;
            
        }
    }


//05) sorting of an array
cout<<"\nThe sorted array is"<<endl;
for(int i=0; i<=size;i++){
    for(int j=i+1;j<=size;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
 for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }

// 06) binary search
cout<<"\nSearching of an element through binary search"<<endl;

    int low,mid,high;
    low=0;
    high=size;
    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==key){
            cout<<"The location of the  required key afteer sorting is"<<mid<<endl;
        }
        if(mid<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return 0;
 }