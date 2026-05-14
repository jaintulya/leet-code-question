// Last updated: 5/14/2026, 7:29:12 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4     int count=0;
5     for(int i=0 ; i<nums.size();i++){
6        if(nums[i]<k) count++;
7     }   
8     return count;
9    }
10};