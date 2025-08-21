#include<iostream>
using namespace std;

int sqrty(int n){
    int low=1,high=n;
    int res=1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid<=n){
            res=mid;
            low=mid+1;
        } else{
            high=mid-1;
        }
    }
    return res;
}
int main(){
    cout<<sqrty(9);
    return 0;
}