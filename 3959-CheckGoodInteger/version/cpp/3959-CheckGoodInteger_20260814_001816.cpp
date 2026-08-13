// Last updated: 8/14/2026, 12:18:16 AM
1class Solution {
2public:
3    bool checkGoodInteger(int n) {
4        int sum = 0, sum2 = 0;
5        int temp = n;
6
7        while (temp > 0) {
8            int digit = temp % 10;
9
10            sum += digit;
11            sum2 += digit * digit;
12
13            temp = temp / 10;
14        }
15
16        return (sum2 - sum) >= 50;
17    }
18};