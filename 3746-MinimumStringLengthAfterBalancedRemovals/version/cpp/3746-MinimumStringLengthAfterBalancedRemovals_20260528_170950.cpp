// Last updated: 5/28/2026, 5:09:50 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4      sort(nums.begin(),nums.end());
5      for(int i=0 ; i<nums.size()-1;i++){
6        if(nums[i]==nums[i+1]){
7            return true;}
8        
9      }
10      return false ;
11
12    }
13};