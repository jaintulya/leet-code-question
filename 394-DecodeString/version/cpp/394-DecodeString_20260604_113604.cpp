// Last updated: 6/4/2026, 11:36:04 AM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4
5        int pos = haystack.find(needle);
6
7        return pos == string::npos ? -1 : pos;
8    }
9};