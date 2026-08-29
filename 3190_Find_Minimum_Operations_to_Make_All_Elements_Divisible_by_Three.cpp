/* You are given an integer array nums. In one operation,
you can add or subtract 1 from any element of nums.
Return the minimum number of operations to make all elements
of nums divisible by 3. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 23.24 MB, Beats: 45.48%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] % 3 != 0) {
                if (nums[i] % 3 == 1) {
                    nums[i]--;
                    ops++;
                } else {
                    nums[i]++;
                    ops++;
                }
            }
        }
        return ops;
    }
};

int main() {
    Solution test;
    vector<int> nums = {1, 2, 3, 4};
    int ops = test.minimumOperations(nums);
    cout << "Number of Operations: " << ops << endl;
    return 0;
}