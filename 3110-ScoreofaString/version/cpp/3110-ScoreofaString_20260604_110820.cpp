// Last updated: 6/4/2026, 11:08:20 AM
1class Solution {
2public:
3    int scoreOfString(string s) {
4
5        int score = 0;
6
7        for(int i = 0; i < s.size() - 1; i++) {
8
9            score += abs(s[i] - s[i + 1]);
10        }
11
12        return score;
13    }
14};