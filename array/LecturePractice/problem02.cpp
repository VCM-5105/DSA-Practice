#include<iostream>

using namespace std;


int main(){
    
    int arr[]={1,2,3,4};
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;

    bool t=false;
    int i=0;
    int j=3;
  while (i<j){
    if(arr[i]+arr[j]==x){
        t=true;
        break;
    } else if(arr[i]+arr[j]< x){
        i++;
    } else{
        j--;
    }
  }
  if(t=true) cout<<"Yes";
  else cout<<"No";
    
    return 0;
}