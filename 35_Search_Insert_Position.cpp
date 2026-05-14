/* Given a sorted array of distinct integers and a target value,
return the index if the target is found. If not, return the index
where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 13.52 MB, Beats: 76.71%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low, high, i;
        low = 0;
        high = nums.size() - 1;
        while (low <= high) {
            int middle = (low + high) / 2;
            if (target < nums[middle])
            high = middle - 1;
            else if (target > nums[middle])
            low = middle + 1;
            else
            return middle;
        }
        i = 0;
        while (i < nums.size()) {
            if (target < nums[i])
            return i;
            i++;
        }
        return i;
    }
};

int main() {
    Solution test;
    vector<int> nums = {1, 3, 5, 7, 9, 14};
    int x = test.searchInsert(nums, 9);
    int y = test.searchInsert(nums, 6);
    cout << x << endl << y << endl;
    return 0;
}