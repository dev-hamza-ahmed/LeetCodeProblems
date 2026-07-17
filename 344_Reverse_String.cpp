/* Write a function that reverses a string.The input string is given as
an array of characters s. You must do this by modifying the input array
in-place with O(1) extra memory. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 27.31 MB, Beats: 17.34%

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start, end;
        start = 0;
        end = s.size() - 1;
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
};

int main() {
    Solution test;
    vector<char> s = {'R', 'E', 'V', 'E', 'R', 'S', 'E'};
    test.reverseString(s);
    for (char val: s) {
        cout << val;
    }
    return 0;
}