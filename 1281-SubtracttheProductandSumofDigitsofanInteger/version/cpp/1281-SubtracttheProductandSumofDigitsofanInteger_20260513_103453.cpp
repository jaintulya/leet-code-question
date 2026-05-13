// Last updated: 5/13/2026, 10:34:53 AM
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int sumdigit = 0;
5        int tempn = n;
6        int productdigit = 1;
7        while (tempn > 0) {
8            sumdigit += tempn % 10;
9            productdigit *= tempn % 10;
10
11            tempn = tempn / 10;
12        }
13        return productdigit - sumdigit;
14    }
15};