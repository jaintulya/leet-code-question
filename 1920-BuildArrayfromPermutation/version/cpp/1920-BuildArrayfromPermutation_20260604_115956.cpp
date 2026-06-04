// Last updated: 6/4/2026, 11:59:56 AM
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4
5        vector<int> ans(nums.size());
6
7        for(int i = 0; i < nums.size(); i++) {
8
9            ans[i] = nums[nums[i]];
10        }
11
12        return ans;
13    }
14};