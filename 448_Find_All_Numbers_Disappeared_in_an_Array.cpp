/* Given an array nums of n integers where nums[i] is in the range [1, n],
return an array of all the integers in the range [1, n] that do not appear
in nums. */

// Results:
// Runtime: 83 ms, Beats: 10.44%
// Memory: 66.04 MB, Beats: 12.56%

#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        set<int> s;
        for (int val: nums) {
            s.insert(val);
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (!s.count(i))
            res.push_back(i);
        }
        return res;
    }
};

int main() {
    Solution test;
    vector<int> nums = {1, 2, 2, 3, 4, 7, 5, 9, 5};
    vector<int> x;
    x = test.findDisappearedNumbers(nums);
    for (int val: x) {
        cout << val << " ";
    }
    return 0;
}