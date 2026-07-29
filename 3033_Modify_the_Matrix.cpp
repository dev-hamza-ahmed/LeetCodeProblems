/* Given a 0-indexed m x n integer matrix matrix, create a new 0-indexed
matrix called answer. Make answer equal to matrix, then replace each element
with the value -1 with the maximum element in its respective column.
Return the matrix answer. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 23.61 MB, Beats: 39.26%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer = matrix;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == -1) {
                    int max = matrix[0][j];
                    for (int x = 1; x < matrix.size(); x++) {
                        if (matrix[x][j] > max)
                        max = matrix[x][j];
                    }
                    answer[i][j] = max;
                }
            }
        }
        return answer;
    }
};

int main() {
    Solution test;
    vector<vector<int>> matrix ={{1, 1, 2}, {9, -1, 8}, {1, 3, -1}};
    vector<vector<int>> x;
    x = test.modifiedMatrix(matrix);
    for (int i = 0; i < x.size(); i++) {
        for (int j = 0; j < x[0].size(); j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}