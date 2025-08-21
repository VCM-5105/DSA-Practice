#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> result(vector<int> nums){
    vector<int>res;


    // This is brute force approach for solving the question
    // for(int i=0;i<nums.size();i++){
    //     bool resu=true;
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]<nums[j]){
    //             resu=false;
    //             break;
    //         }
    //     }
    //    if(resu){
    //     res.push_back(nums[i]);
    //    }
    // }
   // return res;

   // This is Optimal approach for solving the question
   //Starting from left

   int n=nums.size();
   int max=nums[n-1];
   res.push_back(nums[n-1]);

   for(int i=n-2;i>=0;i--){
    if(nums[i]>max){
        res.push_back(nums[i]);
        max=nums[i];
    }
   }
   reverse(res.begin(),res.end());
   return res;
}

int main(){
 vector<int>nums={1,7,2,0};
 vector<int>final=result(nums);
 for(int i=0;i<final.size();i++){
     cout<<final[i];
 }
 return 0;
}