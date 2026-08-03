/* Given two integer arrays nums1 and nums2, return an array of their
intersection. Each element in the result must be unique and you may return
the result in any order. */

// NOTE:
/* The run time result of both the solutions is 10/11 ms on LeetCode!
The results given below are the better results achieved after multiple
resubmissions. */

// Results:
// Runtime: 8 ms, Beats: 7.01%
// Memory: 14.11 MB, Beats: 65.80%

#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    s.insert(nums1[i]);
                }
            }
        }
        vector<int> res(s.begin(), s.end());
        return res;
    }
};

int main() {
    Solution test;
    vector<int> nums1 = {1, 2, 3, 4, 2, 2, 4};
    vector<int> nums2 = {0, 2, 3, 5};
    vector<int> x;
    x = test.intersection(nums1, nums2);
    for (int val: x) {
        cout << val << " ";
    }
    return 0;
}

/*
Results:
Runtime: 9 ms, Beats: 5.69%
Memory: 14.02 MB, Beats: 70.59%

 class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    for (int val: res) {
                        if (nums1[i] == val)
                        goto down;
                    }
                    res.push_back(nums1[i]);
                    down:
                }
            }
        }
        return res;
    }
};
*/