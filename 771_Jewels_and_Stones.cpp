/* You're given strings jewels representing the types of stones that are
jewels, and stones representing the stones you have. Each character in
stones is a type of stone you have. You want to know how many of the
stones you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of
stone from "A". */

// Results:
// Runtime: 0 ms, Beats: 100.00%
// Memory: 8.20 MB, Beats: 91.76%

#include<iostream>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < stones.size(); i++) {
            for (int j = 0; j < jewels.size(); j++) {
                if (stones[i] == jewels[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution test;
    string jewels = "aA";
    string stones = "aaAbbbb";
    int count = test.numJewelsInStones(jewels, stones);
    cout << "Count: " << count << endl;
    return 0;
}