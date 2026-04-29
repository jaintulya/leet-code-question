// Last updated: 4/30/2026, 3:27:13 AM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4      sort(nums.begin(),nums.end());
5
6      for(int i=0 ; i<nums.size();i+=2){
7        swap(nums[i],nums[i+1]);
8      }
9      return nums;
10    }
11};