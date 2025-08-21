#include<iostream>
using namespace std;
int bitwiseComp(int n){
    int m=n;// storing n into m
    int mask=0;// initilising mask with 0 to perform left shift operation and or with 1
    while(m!=0){
        mask=(mask << 1) | 1;
        m= m>>1; // right shift m for updated value of m
    } 
    int ans= (~n) & mask;
}
int main(){
    int n;
    cin>>n;
    cout<<"The complement of n is : ";
    cout<<bitwiseComp(n);
    return 0;
}