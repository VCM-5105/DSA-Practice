#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int findmax(vector<int>&arr){
    int maxi=-1;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int totalhours(vector<int>&arr,int h){
    int totalh=0;
    for(int i=0;i<arr.size();i++){
        totalh=ceil(double(arr[i]/double (h)));

    }
    return totalh;

}
int calcualte(vector<int>&arr,int h){
    
}

int main(){

}