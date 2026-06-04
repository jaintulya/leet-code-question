// Last updated: 6/4/2026, 10:57:14 AM
1class Solution {
2public:
3    int mirrorDistance(int n) {
4         int original = n;
5        int rev = 0;
6
7        while(n > 0) {
8
9            int digit = n % 10;
10
11            rev = rev * 10 + digit;
12
13            n /= 10;
14        }
15
16        return abs(original - rev);
17    }
18};