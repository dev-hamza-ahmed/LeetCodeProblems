/* Given an integer number n, return the difference between the product
of its digits and the sum of its digits. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 7.90 MB, Beats: 55.02%

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        string ns = to_string(n);
        int product = 1;
        int sum = 0;
        int diff;
        for (int i = 0; i < ns.size(); i++) {
            product *= (ns[i] - '0');
            sum += (ns[i] - '0');
        }
        diff = product - sum;
        return diff;
    }
};

int main() {
    Solution test;
    int res = test.subtractProductAndSum(3955);
    cout << "The Result is: " << res << endl;
    return 0;
}