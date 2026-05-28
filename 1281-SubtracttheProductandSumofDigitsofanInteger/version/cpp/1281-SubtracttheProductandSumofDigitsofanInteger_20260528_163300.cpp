// Last updated: 5/28/2026, 4:33:00 PM
1class Solution {
2public:
3    int arraySign(vector<int>& nums) {
4        int sign = 1;
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 0) {
8                return 0;
9            }
10            if (nums[i] < 0) {
11                sign = -sign;
12            }
13        }
14        return sign;
15    }
16};