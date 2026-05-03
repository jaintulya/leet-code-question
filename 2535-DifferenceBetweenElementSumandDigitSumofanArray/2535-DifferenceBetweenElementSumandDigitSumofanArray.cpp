// Last updated: 5/3/2026, 10:26:28 PM
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int elementsum = 0;
5        int digitsum = 0;
6
7        for (int a : nums) {
8
9            elementsum += a;
10
11            int temp = a;
12
13            while (temp > 0) {
14
15                digitsum += temp % 10;
16
17                temp = temp / 10;
18            }
19        }
20
21        return elementsum-digitsum;
22    }
23};