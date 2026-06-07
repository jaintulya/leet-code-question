// Last updated: 6/7/2026, 5:46:19 PM
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4        vector<int> ans(nums.size());
5        for(int i=0; i<nums.size();i++){
6            ans[i]= nums[nums[i]];
7        }  
8        return ans;
9    }
10};