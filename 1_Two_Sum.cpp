/* Given an array of integers nums and an integer target, return indices of the
two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not
use the same element twice.
You can return the answer in any order. */

// Results:
// Run Time: 71 ms, Beats: 14.99%
// Memory: 14.13 MB, Beats: 64.63%

#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec; 

        for (int i= 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec;
                }
            }
        }
        return vec;
    }
};

main() {
    Solution test;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> res;
    int target = 9;
    res = test.twoSum(nums, target);
    if (res.empty()) {
        cout << "No Match Found" << endl;
    } else {
        for (int val: res) {
            cout << val << " ";
        }
    }
}