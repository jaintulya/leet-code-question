// Last updated: 8/23/2026, 11:35:19 PM
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        int count = 0;
5        string ans = "";
6        for (int i = 0; i < s.length() - 1; i++) {
7            if (s[i] == ' ')
8                count++;
9            if (count == k) {
10                return ans;
11            }
12            ans.push_back(s[i]);
13        }
14
15        return s;
16    }
17};