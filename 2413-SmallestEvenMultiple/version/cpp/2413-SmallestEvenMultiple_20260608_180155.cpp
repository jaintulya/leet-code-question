// Last updated: 6/8/2026, 6:01:55 PM
1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4
5        if(n % 2 == 0) {
6            return n;
7        }
8
9        return n * 2;
10    }
11};