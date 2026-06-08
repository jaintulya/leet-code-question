// Last updated: 6/8/2026, 5:52:44 PM
1class Solution {
2public:
3    int findClosest(int x, int y, int z) {
4
5        int d1 = abs(z - x);
6        int d2 = abs(z - y);
7
8        if(d1 < d2) return 1;
9
10        if(d2 < d1) return 2;
11
12        return 0;
13    }
14};