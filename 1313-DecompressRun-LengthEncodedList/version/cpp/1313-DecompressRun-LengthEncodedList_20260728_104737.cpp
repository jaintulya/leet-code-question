// Last updated: 7/28/2026, 10:47:37 AM
1class Solution {
2public:
3    vector<int> decompressRLElist(vector<int>& nums) {
4        vector<int> ans;
5        for(int i=0;i<nums.size();i+=2){
6for(int j=0;j<nums[i];j++){
7    ans.push_back(nums[i+1]);
8}
9        }
10        return ans;
11    }
12};