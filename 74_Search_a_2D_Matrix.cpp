/* You are given an m x n integer matrix matrix with the following two
properties:
 - Each row is sorted in non-decreasing order.
 - The first integer of each row is greater than the last integer of the
previous row.
Given an integer target, return true if target is in matrix or false
otherwise.
You must write a solution in O(log(m * n)) time complexity. */

// Results:
// Run Time: 0 ms, Beats: 100%
// Memory: 13.20 MB, Beats: 97.43%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            if (target <= matrix[i][matrix[0].size() - 1]) {
                int start = 0;
                int end = matrix[0].size() - 1;
                while (start <= end) {
                    int middle = (start + end) / 2;
                    if (matrix[i][middle] > target)
                    end = middle - 1;
                    else if (matrix[i][middle] < target)
                    start = middle + 1;
                    else
                    return true;
                }
                return false;
            }
        }
        return false;
    }
};

int main() {
    Solution test;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 7;
    int x = test.searchMatrix(matrix, target);
    if(x)
    cout << "Element Found" << endl;
    else
    cout << "Element Not Found" << endl;
    return 0;
}