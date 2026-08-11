/* Given a string s consisting of words and spaces, return the length of the
last word in the string.
A word is a maximal substring consisting of non-space characters only. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 8.93 MB, Beats: 32.47%

#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size() - 1;
        int count = 0;
        while(end >= 0 && s[end] == ' ') {
            end--;
        }
        while (end >= 0 && s[end] != ' ') {
            count++;
            end--;
        }
        return count;
    }
};

int main() {
    Solution test;
    string s = "let's code in C++ with Hamza  ";
    int res;
    res = test.lengthOfLastWord(s);
    cout << "The length of last word is: " << res << endl;
    return 0;
}

/* Concept of short-circuit evaluation in C++
Here, if we revert the order of conditions to:
s[end] != ' ' && end >= 0
s[end] == ' ' && end >= 0
the left side (e.g., s[end] == ' ') is evaluated first.
If end is already -1, that access happens before the
end >= 0 check, causing out-of-bounds access.
To avoid that, always check the boundary first like:
while (end >= 0 && s[end] == ' ') */