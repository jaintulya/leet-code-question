// Last updated: 6/5/2026, 2:57:36 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string result;
5
6        for (char ch : s) {
7            if (!result.empty() && result.back() == ch) {
8                result.pop_back();
9            } else {
10                result.push_back(ch);
11            }
12        }
13
14        return result;
15    }
16};