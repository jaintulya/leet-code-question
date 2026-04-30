// Last updated: 4/30/2026, 1:08:07 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWords = 0;
5
6        for (string s : sentences) {
7            int count = 1;  // at least 1 word
8
9            for (char c : s) {
10                if (c == ' ') count++;
11            }
12
13            maxWords = max(maxWords, count);
14        }
15
16        return maxWords;
17    }
18};