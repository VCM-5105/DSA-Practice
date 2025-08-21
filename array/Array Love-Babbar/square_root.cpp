#include<iostream>
using namespace std;


int square_root(int x){
    int s=0;
    int e=x;
    int mid=s+(e-s)/2;
    int square=mid*mid;
    int ans;
    while(s<e){
         int square=mid*mid;
        if(square==x){
            return mid;
        }
        if(square>x){
            e=mid-1;
        } else if(square<x){
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double precision(int n,int pre,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<=pre;i++){
        factor=factor/10;
        for(double j=ans; j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int tempsol=square_root(n);
    cout<<precision(n,4,tempsol);
    return 0;
}