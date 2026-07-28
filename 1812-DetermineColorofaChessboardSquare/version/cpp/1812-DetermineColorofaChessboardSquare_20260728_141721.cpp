// Last updated: 7/28/2026, 2:17:21 PM
1class Solution {
2public:
3    int finalElement(vector<int>& nums) {
4     int ans;
5     ans=max(nums.front(),nums.back());
6     return ans;
7    }
8};