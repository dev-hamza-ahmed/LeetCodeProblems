/* A square matrix is said to be an X-Matrix if both of the following
conditions hold:
 - All the elements in the diagonals of the matrix are non-zero.
 - All other elements are 0.
Given a 2D integer array grid of size n x n representing a square matrix,
return true if grid is an X-Matrix. Otherwise, return false. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 20.13 MB, Beats: 12.35%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int x = grid.size() - 1;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                if (i == j || i + j == grid.size() - 1) {
                    if (grid[i][j] == 0)
                    return false;
                } else {
                    if (grid[i][j] != 0)
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution test;
    vector<vector<int>> grid = {{6, 0, 2}, {0, 5, 0}, {8, 0, 3}};
    if (test.checkXMatrix(grid))
    cout << "Given matrix is a X-Matrix";
    else
    cout << "Given matrix isn't a X-Matrix";
    return 0;
}