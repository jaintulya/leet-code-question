// Last updated: 5/28/2026, 4:42:05 PM
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long i = 1;
5
6        while (i * i <= num) {
7            if (i * i == num) {
8                return true;
9            }
10            i++;
11        }
12        return false;
13    }
14};