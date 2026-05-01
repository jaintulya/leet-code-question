// Last updated: 5/1/2026, 6:24:00 PM
1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int count = 0;
5        for (int i = 1; i < s.size(); i++) {
6            if (tolower(s[i]) != tolower(s[i - 1])) {
7                count++;
8            }
9        }
10        return count;
11    }
12};