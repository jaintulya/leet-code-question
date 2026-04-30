// Last updated: 4/30/2026, 2:06:06 PM
1class Solution {
2public:
3    int xorOperation(int n, int start) {
4        int result = 0;
5
6        for (int i = 0; i < n; i++) {
7            result ^= (start + 2 * i);
8        }
9
10        return result;
11    }
12};