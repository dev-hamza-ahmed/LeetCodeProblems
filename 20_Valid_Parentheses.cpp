/* Given a string s containing just the characters '(', ')', '{', '}',
'[' and ']',determine if the input string is valid.
An input string is valid if:
 - Open brackets must be closed by the same type of brackets.
 - Open brackets must be closed in the correct order.
 - Every close bracket has a corresponding open bracket of the same type. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 8.67 MB, Beats: 97.61%

#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            } else {
                if (stk.empty()) {
                    return false;
                }
                if ((s[i] == ')' && stk.top() == '(') || (s[i] == '}' && stk.top() == '{') || (s[i] == ']' && stk.top() == '[')) {
                    stk.pop();
                } else {
                return false;
                }
            }
        }
        return stk.empty();
    }
};

int main() {
    Solution test;
    string s = "[{()}()]";
    if(test.isValid(s)) {
        cout << "Valid Parentheses" << endl;
    } else {
        cout << "Invalid Parentheses" << endl;
    }
    return 0;
}