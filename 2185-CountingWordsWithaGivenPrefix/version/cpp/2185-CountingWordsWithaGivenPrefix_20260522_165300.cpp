// Last updated: 5/22/2026, 4:53:00 PM
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4
5        int count = 0;
6
7        for(int num : nums) {
8
9            int digits = 0;
10
11            while(num > 0) {
12
13                digits++;
14
15                num /= 10;
16            }
17
18            if(digits % 2 == 0) {
19
20                count++;
21            }
22        }
23
24        return count;
25    }
26};