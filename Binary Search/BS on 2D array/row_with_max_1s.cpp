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

int main(){
    vector<vector<int>>matrix={{1,0,1,1,1},{1,1,1,1,0},{0,0,0,0,1},{1,1,1,1,1},{0,1,0,1,0}};
    cout<<maximum1(matrix);
    //the output for this matrix is 3 as third row has maximum one with count 5
    return 0;
}