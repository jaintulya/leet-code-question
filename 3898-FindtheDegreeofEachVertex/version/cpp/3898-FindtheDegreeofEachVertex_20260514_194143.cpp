// Last updated: 5/14/2026, 7:41:43 PM
1class Solution {
2public:
3    int mySqrt(int x) {
4
5        long long i = 0;
6
7        while(i * i <= x) {
8            i++;
9        }
10
11        return i - 1;
12    }
13};