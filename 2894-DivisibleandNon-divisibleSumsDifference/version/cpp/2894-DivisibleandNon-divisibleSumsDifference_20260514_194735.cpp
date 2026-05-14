// Last updated: 5/14/2026, 7:47:35 PM
1class Solution {
2public:
3    int minLengthAfterRemovals(string s) {
4        int acount = 0;
5        int bcount = 0;
6        int totalcount = 0;
7        for (char ch : s) {
8            if (ch == 'a')
9                acount++;
10            if (ch == 'b')
11                bcount++;
12        }
13        totalcount = min(acount, bcount);
14
15        return s.size()-totalcount*2;
16    }
17};