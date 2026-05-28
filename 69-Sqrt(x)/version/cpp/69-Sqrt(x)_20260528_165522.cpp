// Last updated: 5/28/2026, 4:55:22 PM
1class Solution {
2public:
3    int mySqrt(int x) {
4        long i = 1; 
5
6        while (i * i <= x) { 
7
8            i++;
9        }
10        return i - 1;
11    }
12};