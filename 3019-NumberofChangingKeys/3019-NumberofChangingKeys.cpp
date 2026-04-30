// Last updated: 4/30/2026, 2:38:20 PM
1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int count = 0;
5
6        for (int i = 1; i < s.size(); i++) {
7            if (tolower(s[i]) != tolower(s[i - 1])) {
8                count++;
9            }
10        }
11
12        return count;
13    }
14};