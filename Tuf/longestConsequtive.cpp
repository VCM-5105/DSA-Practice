#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        if(nums[1]-nums[0]==1){
            temp.push_back(nums[0]);
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                temp.push_back(nums[i]);
            }
        }
        int result=temp.size();
        return result;
    }

    int main(){
        vector<int>nums={100,4,200,1,3,2};
        cout<<longestConsecutive(nums);
        return 0;
    }