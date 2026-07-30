/* You have n coins and you want to build a staircase with these coins.
The staircase consists of k rows where the ith row has exactly i coins.
The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase
you will build. */

// Results:
// Runtime: 4 ms, Beats: 27.94%
// Memory: 8.86 MB, Beats: 34.91%

#include<iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int rows = 0;
        while (n >= rows + 1) {
            rows++;
            n -= rows;
        }
        return rows;
    }
};

int main() {
    Solution test;
    int x = test.arrangeCoins(8);
    cout << x << endl;
    return 0;
}