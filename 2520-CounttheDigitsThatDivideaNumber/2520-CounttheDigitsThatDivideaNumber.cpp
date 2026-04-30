// Last updated: 4/30/2026, 1:15:31 PM
1class Solution {
2public:
3    int countDigits(int num) {
4        int n = num;
5        int count = 0;
6
7        while (n > 0) {
8            int digit = n % 10;  
9            if (num % digit == 0) {
10                count++;
11            }
12            n /= 10; 
13        }
14
15        return count;
16    }
17};