/* Given an m x n matrix, return true if the matrix is Toeplitz.
Otherwise, return false.
A matrix is Toeplitz if every diagonal from top-left to bottom-right has
the same elements. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 20.92 MB, Beats: 88.95%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size() - 1; i++) {
            for (int j = 0; j < matrix[0].size() - 1; j++) {
                if (matrix[i][j] != matrix[i + 1][j + 1])
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution test;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 1, 2}, {5, 4, 1}};
    if(test.isToeplitzMatrix(matrix))
    cout << "Given matrix is a Toeplitz Matrix";
    else
    cout << "Given matrix isn't a Toeplitz Matrix";
    return 0;
}