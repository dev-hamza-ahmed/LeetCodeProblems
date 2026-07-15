/* Given an integer n, return a string array answer (1-indexed) where:
 - answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
 - answer[i] == "Fizz" if i is divisible by 3.
 - answer[i] == "Buzz" if i is divisible by 5.
 - answer[i] == i (as a string) if none of the above conditions are true. */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 11.72 MB, Beats: 42.97%

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                answer.push_back("FizzBuzz");
                continue;
            }
            if (i % 3 == 0) {
                answer.push_back("Fizz");
                continue;
            }
            if (i % 5 == 0) {
                answer.push_back("Buzz");
                continue;
            }
            answer.push_back(to_string(i));
        }
        return answer;
    }
};

int main() {
    Solution test;
    vector<string> res;
    res = test.fizzBuzz(15);
    for (string val: res) {
        cout << val << " ";
    }
}