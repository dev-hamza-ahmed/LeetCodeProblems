/* There is a programming language with only four operations
and one variable X:
++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.
Given an array of strings operations containing a list of operations,
return the final value of X after performing all the operations. */

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "X++" || operations[i] == "++X")
            X++;
            else
            X--;
        }
        return X;
    }
};

int main() {
    Solution test;
    return 0;
}