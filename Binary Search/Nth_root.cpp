#include<iostream>
#include<math.h>
using namespace std;

//Brute force approach
int nthroot(int n,int k){
    for(int i=1;i<=n;i++){
        int result=1;
        for(int j=1;j<=k;j++){
            result*=i;
            if(result>n) break;
        }
        if(result==n) return i;
    }
    return -1;
}

//optimal approach
double exp(int base,int p){
    int result=1;
    for(int i=1;i<=p;i++){
        result=result*base;
    }
    return result;
}

int nthBs(int n,int k){
    int low=1,high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(exp(mid,k)==n) return mid;
        else if(exp(mid,k)<n) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main(){
    cout<<exp(25,2)<<endl;
    cout<<nthBs(25,2);
    return 0;
}