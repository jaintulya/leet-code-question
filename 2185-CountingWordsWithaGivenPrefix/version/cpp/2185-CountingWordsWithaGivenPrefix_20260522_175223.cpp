// Last updated: 5/22/2026, 5:52:23 PM
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4
5        int sum = 0;
6        int product = 1;
7
8        int temp = n;
9
10        while(temp > 0) {
11
12            int digit = temp % 10;
13
14            sum += digit;
15
16            product *= digit;
17
18            temp /= 10;
19        }
20
21        return n % (sum + product) == 0;
22    }
23};