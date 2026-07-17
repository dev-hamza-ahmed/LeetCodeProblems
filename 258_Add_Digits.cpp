/* Given an integer num, repeatedly add all its digits until the result
has only one digit, and return it. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 9.47 MB, Beats: 8.81%

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        string n = to_string(num);
        int res;
        do {
            res = 0;
            for (int i = 0; i < n.size(); i++) {
                res += n[i] - '0';
            }
            n = to_string(res);
        } while (n.size() != 1);
        return res;
    }
};

int main() {
    Solution test;
    int x;
    x = test.addDigits(56);
    cout << "The final digit is: " << x << endl;
    return 0;
}