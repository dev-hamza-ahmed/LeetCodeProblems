/* You are given an integer n and an integer start.
Define an array nums where nums[i] = start + 2 * i (0-indexed) and
n == nums.length.
Return the bitwise XOR of all elements of nums. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 7.78 MB, Beats: 79.81%

#include<iostream>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        int nums[n];
        for (int i = 0; i < n; i++) {
            nums[i] = start + 2 * i;
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

int main() {
    Solution test;
    int res = test.xorOperation(8, 3);
    cout << "The Result of XOR Operation is: " << res << endl;
    return 0;
}