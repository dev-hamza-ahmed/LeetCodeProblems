/* Given an m x n integer matrix matrix, if an element is 0,
set its entire row and column to 0's.
You must do it in place. */

// Results:
// Run Time: 0 ms, Beats: 100%
// Memory: 18.71 MB, Beats: 22.86%

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        stack<int> x;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    x.push(i);
                    x.push(j);
                }
            }
        }
        while (x.size() != 0) {
            int b = x.top();
            x.pop();
            int a = x.top();
            x.pop();
            for (int i = 0; i < matrix[0].size(); i++) {
                matrix[a][i] = 0;
            }
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][b] = 0;
            }
        }
    }
};

int main() {
    Solution test;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
    test.setZeroes(matrix);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}