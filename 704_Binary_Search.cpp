/* Given an array of integers nums which is sorted in ascending order,
and an integer target, write a function to search target in nums.
If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 31.41 MB, Beats: 8.83%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end) {
            int middle = (start + end) / 2;
            if (target > nums[middle])
            start = middle + 1;
            else if (target < nums[middle])
            end = middle - 1;
            else
            return middle;
        }
        return -1;
    }
};

int main() {
    Solution test;
    vector<int> nums = {1, 3, 5, 7, 9};
    int index = test.search(nums, 3);
    if (index == -1)
    cout << "Element Not Found" << endl;
    else
    cout << "Element Found at index " << index << endl;
    return 0;
}