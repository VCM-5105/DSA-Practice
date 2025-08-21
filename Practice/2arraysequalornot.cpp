#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool checkArray(vector<int>&a,vector<int>&b,int n,int m){
   
    if(n!=m)
    return false;

     sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                return false;
            } 
        }

     

    return true ;
}

int main(){
    vector<int>a{1,7,9,4,3};
    vector<int>b{7,4,3,9,1};
    int m=a.size();
    int n=b.size();

    cout<<checkArray(a,b,n,m);
    return 0;

}
