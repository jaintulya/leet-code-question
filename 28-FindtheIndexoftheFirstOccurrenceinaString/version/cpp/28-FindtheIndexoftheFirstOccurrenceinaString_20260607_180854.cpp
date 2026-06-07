// Last updated: 6/7/2026, 6:08:54 PM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4       int pos=haystack.find(needle); 
5
6    return pos==string::npos?-1:pos;
7    }
8};