/* You are given a positive integer n. Each digit of n has a sign
according to the following rules:

The most significant digit is assigned a positive sign.
Each other digit has an opposite sign to its adjacent digits.
Return the sum of all digits with their corresponding sign. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 8.04 MB, Beats: 20.36%

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        string ns = to_string(n);
        int sum = 0;
        for (int i = 0; i < ns.size(); i++) {
            if (i % 2 == 0) {
                sum += (ns[i] - '0');
            } else {
                sum -= (ns[i] - '0');
            }
        }
        return sum;
    }
};

int main() {
    Solution test;
    int n = 87644;
    int sum = test.alternateDigitSum(n);
    cout << "The sum is: " << sum << endl;
    return 0;
}