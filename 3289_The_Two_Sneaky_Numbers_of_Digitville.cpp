/* In the town of Digitville, there was a list of numbers called nums
containing integers from 0 to n - 1. Each number was supposed to appear
exactly once in the list, however, two mischievous numbers sneaked in an
additional time, making the list longer than usual.
As the town detective, your task is to find these two sneaky numbers.
Return an array of size two containing the two numbers (in any order),
so peace can return to Digitville. */

// Results:
// Run Time: 0 ms, Beats 100%
// Memory: 25.20 MB, Beats 86.25%

#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    vector<int> getSneakyNumbers (vector<int>& nums) {
        vector<int> array;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    array.push_back(nums[i]);
                    if (array.size() == 2) {
                        break;
                    }
                }
            }
        }
        return array;
    }
};
int main() {
    Solution test;
    vector<int> nums = {2, 0, 1, 3, 2, 3};
    vector<int> res;
    res = test.getSneakyNumbers(nums);
    for (int val: res) {
        cout << val << " ";
    }
    return 0;
}