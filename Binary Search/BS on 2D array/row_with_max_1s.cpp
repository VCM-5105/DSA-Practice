#include<iostream>
#include<vector>

using namespace std;
// using brute-force approach
int maximum1(vector<vector<int>> &matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    int max_one=0;
    int result_row=-1;

    for(int i=0;i<row;i++){
        int curr_count=0;
        for(int j=0;j<col;j++){
            if(matrix[i][j]==1){
                curr_count++;
            }
        }
        if(curr_count>max_one){
            max_one=curr_count;
            result_row=i;
        }
    }
    return result_row;
}

//using Binary-search for optimal approach
int lowerbound(vector<int>arr,int n,int x){
    int low=0,high=n-1;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        } else{
            low=mid+1;
        }
    }
    return ans;
}
int maximum_one(vector<vector<int>>matrix){
    int row=matrix.size();
    int col=matrix[0].size();

    int max_count=0;
    int index=-1;
    for(int i=0;i<row;i++){
        int curr_count=col-lowerbound(matrix[i],col,1);
        if(curr_count>max_count){
            max_count=curr_count;
            index=i;
        }
    }
    return index;

}

int main(){
    vector<vector<int>>matrix={{0,0,1,1,1},{0,1,1,1,1},{0,0,0,0,1},{1,1,1,1,1},{0,1,1,1,1}};
     cout<<maximum1(matrix);
     cout<<maximum_one(matrix);
     
    //the output for this matrix is 3 as third row has maximum one with count 5
   
    return 0;
}