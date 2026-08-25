// Last updated: 8/25/2026, 2:02:59 PM
1class Solution {
2public:
3    int numOfStrings(vector<string>& patterns, string word) {
4        int count = 0;
5
6        for (int i = 0; i < patterns.size(); i++) {
7            if (word.find(patterns[i]) != string::npos)
8                count++;
9        }
10        return count;
11    }
12};