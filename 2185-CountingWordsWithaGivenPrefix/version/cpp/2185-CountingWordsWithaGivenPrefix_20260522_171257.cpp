// Last updated: 5/22/2026, 5:12:57 PM
1class Solution {
2public:
3    int countOperations(int num1, int num2) {
4        int count = 0;
5
6        while (num1 != 0 && num2 != 0) {
7            if (num1 >= num2) {
8                num1 = num1 - num2;
9                count++;
10
11            } else {
12                num2 = num2 - num1;
13                count++;
14            }
15        }
16        return count;
17    }
18};