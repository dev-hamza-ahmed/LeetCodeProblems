/* Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal,
switching the matrix's row and column indices. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 15.06 MB, Beats: 68.17%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> ans(cols, vector<int> (rows));
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> x;
    x = test.transpose(matrix);
    for (int i = 0; i < x.size(); i++) {
        for (int j = 0; j < x[0].size(); j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}