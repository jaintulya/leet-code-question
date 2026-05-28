// Last updated: 5/28/2026, 4:33:01 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int count=0; //3
5
6        for(int i=0; i<nums.size();i++){
7            if(nums[i]<k)
8            count++;
9        }
10        return count;
11    }
12};