/* A self-dividing number is a number that is divisible by every
digit it contains.
For example, 128 is a self-dividing number because 128 % 1 == 0,
128 % 2 == 0, and 128 % 8 == 0.
A self-dividing number is not allowed to contain the digit zero.
Given two integers left and right, return a list of all the
self-dividing numbers in the range [left, right] (both inclusive). */

// Results:
// Runtime: 3 ms, Beats: 9.87%
// Memory: 10.43 MB, Beats: 6.46%

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> list;
        for (int i = left; i <= right; i++) {
            string s = to_string(i);
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '0' || i % (s[j] - '0') != 0)
                break;
                if (j == s.size() - 1)
                list.push_back(i);
            }
        }
        return list;
    }
};

int main() {
    return 0;
}

// Results:
// Runtime: 4 ms, Beats: 5.66%
// Memory: 10.35 MB, Beats: 7.88%

/*
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> list;
        for (int i = left; i <= right; i++) {
            string s = to_string(i);
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '0' || i % (s[j] - '0') != 0)
                goto label;
            }
            list.push_back(i);
            label:
        }
        return list;
    }
};
*/