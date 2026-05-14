/* Given an integer x, return true if x is a palindrome, and false otherwise. */

// Results:
// Run Time: 0 ms, Beats: 100%
// Memory: 8.44 MB, Beats: 92.08%

#include<iostream>
using namespace std;

class Solution {
    public:
    bool isPalindrome(int x) {
        bool ans;
        int original, reversed, digit;
        original = x;
        reversed = 0;
        while (x > 0) {
            digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        if (original == reversed) {
            ans = true;
            return ans;
        } else {
            ans = false;
            return ans;
        }
    }
};

main() {
    Solution test;
    int x = 3443;
    if (test.isPalindrome(x)) {
        cout << x << " is a palindrome" << endl;
    } else {
        cout << x << " is not a palindrome" << endl;
    }
}