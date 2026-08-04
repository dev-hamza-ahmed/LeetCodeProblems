/* Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and
all the elements on the secondary diagonal that are not part of the
primary diagonal. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 14.79 MB, Beats: 98.39%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (i == j)
                sum += mat[i][j];
                else if (i + j == mat.size() - 1)
                sum += mat[i][j];
            }
        }
        return sum;
    }
};

int main() {
    Solution test;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum;
    sum = test.diagonalSum(mat);
    cout << "The sum of both the diagonals is: " << sum << endl;
    return 0;
}