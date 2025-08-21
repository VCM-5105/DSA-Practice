#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // First pass: mark rows and cols to be zeroed
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                // Mark row
                for (int k = 0; k < cols; ++k) {
                    if (matrix[i][k] != 0)
                        matrix[i][k] = -1;
                }
                // Mark column
                for (int k = 0; k < rows; ++k) {
                    if (matrix[k][j] != 0)
                        matrix[k][j] = -1;
                }
            }
        }
    }

    // Second pass: convert all -1 to 0
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
}

// Utility to print matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (auto& row : matrix) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}

// Example usage
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "\nMatrix After Setting Zeroes:\n";
    printMatrix(matrix);

    return 0;
}
