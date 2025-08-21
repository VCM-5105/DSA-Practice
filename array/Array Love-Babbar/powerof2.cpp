#include<iostream>
#include<math.h>
using namespace std;

bool isPowerof2(int n){
    int ans=1;
    for(int i=1;i<=30;i++){
        if(ans==n)
        return true;

         ans= ans*2;
        
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerof2(n);
    return 0;
}