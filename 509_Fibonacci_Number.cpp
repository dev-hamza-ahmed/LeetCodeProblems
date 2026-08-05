/* The Fibonacci numbers, commonly denoted F(n) form a sequence, called
the Fibonacci sequence, such that each number is the sum of the two
preceding ones, starting from 0 and 1. That is,
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n). */

// Results:
// Runtime: 14 ms, Beats: 22.30%
// Memory: 7.85 MB, Beats: 36.43%

#include<iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1)
        return n;
        return fib(n - 1) + fib (n - 2);
    }
};

int main() {
    Solution test;
    int n = 8;
    for (int i = 0; i < n; i++) {
        cout << test.fib(i) << " ";
    }
    return 0;
}