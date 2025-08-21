//Brute Force approch using O(n^2)

class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int row=mat.size()-1;
    int col=mat[0].size()-1;
    int maxcount=-1;
    int result=-1;
    for(int i=0;i<=row;i++){
      int count=-1;
      for(int j=0;j<=col;j++){
        if(mat[i][j]==1){
          count++;
        }
      }
      if(count>maxcount){
        maxcount=count;
        result=i;
      }
    }
    return result;
  }
};

// Optimal approach using binary search on 2-D matrix