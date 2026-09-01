// Last updated: 9/1/2026, 5:36:38 PM
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