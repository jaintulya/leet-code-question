// Last updated: 8/7/2026, 5:48:57 PM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int n = s.size();
5        int length = 0;
6
7        int i = n - 1;
8        while (i >= 0 && s[i] == ' ') {
9            i--;
10        }
11
12        while (i >= 0 && s[i] != ' ') {
13            length++;
14            i--;
15        }
16
17        return length;
18    }
19};