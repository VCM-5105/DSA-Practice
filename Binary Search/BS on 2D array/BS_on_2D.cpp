#include<iostream>
#include<vector>

using namespace std;

//there is two way to implement binary serch in 2d array i.e when the matrix is sorted like 1-D array and wnd way is applicable when the matrix is sorted in column wise

//Matrix is sorted like 1D matrix

bool bs_in_2D(vector<vector<int>>&mat, int target){
    int low=0;
    int n=mat.size();
    int m=mat[0].size();
    int high=(n*m)-1;
    while(low<=high){
        int mid=(low+high)/2;
        int row=mid/m;
        int col=mid%m;
        if(mat[row][col]==target) return true;
        else if(mat[row][col]<target){
           
             low=mid+1;
        } else {
            high=mid-1;
        }
    }
    return false;
}

bool bs_2D_secondType(vector<vector<int>>&mat,int target){
    int rows=mat.size();
    int cols=mat[0].size();
    int row=0,col=cols-1;
    while(row<rows&&col>=0){
        if(mat[row][col]==target) return true;
        else if(mat[row][col]<target) row++;
        else col--;
    }
    return false;
}

//2nd type of binary search in 2d array when matrix is sorted in column wise

vector<int>bs_on2D(vector<vector<int>>&mat,int target){
    if (mat.empty() || mat[0].empty()) {
        return {-1, -1};
    }
    
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = (n * m) - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / m;
        int col = mid % m;

        if (mat[row][col] == target) {
            return {row, col};
        } else if (mat[row][col] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return {-1, -1};

}



// (Your functions bs_in_2D, bs_2D_secondType, and bs_on2D are correct)

int main(){
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Correctly printing the boolean return value
    cout << "bs_in_2D(mat, 6) returned: " << bs_in_2D(mat, 6) << endl;
    cout << "bs_2D_secondType(mat, 0) returned: " << bs_2D_secondType(mat, 0) << endl;

    // Correctly printing the vector return value
    vector<int> result = bs_on2D(mat, 6);
    cout << "bs_on2D(mat, 6) returned: {" << result[0] << ", " << result[1] << "}" << endl;
    
    return 0;
}