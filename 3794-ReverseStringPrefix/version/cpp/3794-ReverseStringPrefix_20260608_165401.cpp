// Last updated: 6/8/2026, 4:54:01 PM
1class Solution {
2public:
3    string reversePrefix(string s, int k) {
4          reverse(s.begin(), s.begin() + k);
5
6        return s;
7    }
8};