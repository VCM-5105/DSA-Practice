#include<iostream>
using namespace std;

int countDuplicates(int *num,int target,int size){
    int count =0;
    for(int i=0;i<size;i++){
        if(num[i]==target){
            count++;
        }
    }
    return count;
}

int main(){
    int num[]={2,5,5,5,6,8,9,9};
    int target,count=0;
    int size=8;
    cout<<"Enter the target number: ";
    cin>>target;
    count=countDuplicates(num,target,size);

    if(count>0){
        cout<<"The number "<< target<<" appeared "<<count<<"  times in array"<<endl;
    }
    else{
        cout<<"The entered "<<target<<" is not in the given array"<<endl;
    }
    return 0;
}