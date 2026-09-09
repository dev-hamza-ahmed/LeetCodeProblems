/* You are given an integer array nums and an integer k. You can perform
the following operation any number of times:
Select an index i and replace nums[i] with nums[i] - 1.
Return the minimum number of operations required to make the sum of the
array divisible by k. */

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        while (sum % k != 0) {
            count++;
            sum--;
        }
        return count;
    }
};

int main() {
    Solution test;
    return 0;
}