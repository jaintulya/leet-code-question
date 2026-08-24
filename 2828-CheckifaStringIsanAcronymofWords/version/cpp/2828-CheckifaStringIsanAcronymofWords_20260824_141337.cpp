// Last updated: 8/24/2026, 2:13:37 PM
1class Solution {
2public:
3    bool isAcronym(vector<string>& words, string s) {
4        if(words.size()!=s.length()) return false;
5        for (int i = 0; i < words.size(); i++) {
6
7            if (words[i][0] != s[i]) {
8                return false;
9            }
10        }
11        return true;
12    }
13};