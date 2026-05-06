// Last updated: 5/6/2026, 12:57:51 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4   for(int i=0;i<nums.size();i++){
5    nums[i] = nums[i] * nums[i];
6}
7
8sort(nums.begin(), nums.end());
9
10return nums;
11    }
12};