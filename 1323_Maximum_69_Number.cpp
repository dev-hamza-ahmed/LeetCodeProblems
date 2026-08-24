/* You are given a positive integer num consisting only of digits 6 and 9.
Return the maximum number you can get by changing at most one digit
(6 becomes 9, and 9 becomes 6). */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 8.11 MB, Beats: 9.08%

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        int max;
        string nums = to_string(num);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == '6') {
                nums[i] = '9';
                break;
            }
        }
        max = stoi(nums);
        return max;
    }
};

int main() {
    Solution test;
    int num = 6966;
    int max = test.maximum69Number(num);
    cout << "Maximum Number after 69 Conversion: " << max << endl;
    return 0;
}