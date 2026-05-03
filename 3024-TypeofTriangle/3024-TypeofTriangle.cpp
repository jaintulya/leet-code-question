// Last updated: 5/3/2026, 5:15:24 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxword = 0;
5
6        for (string s : sentences) {
7            int count = 1;
8            for (char ch : s) {
9                if(ch== ' ') count++;
10            }
11            maxword= max(maxword,count);
12
13        }
14        return maxword;
15    }
16};