// Last updated: 8/18/2026, 1:56:44 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int count = 0;
5
6        for (int i = 1; i < nums.size(); i++) {
7            int newValue = max(nums[i], nums[i - 1] + 1);
8
9            count += newValue - nums[i];
10
11            nums[i] = newValue;
12        }
13
14        return count;
15    }
16};