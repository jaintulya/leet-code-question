// Last updated: 5/16/2026, 11:14:06 AM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        for (int i = 0; i < nums.size() - 1; i++) {
7            if (nums[i] == nums[i + 1]) {
8                return true;
9            }
10        }
11        return false;
12    }
13};