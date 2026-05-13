// Last updated: 5/13/2026, 5:47:18 PM
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int singlesum=0;
5        int doublesum=0;
6        for(int i=0 ;i<nums.size();i++){
7            if(nums[i]<=9) singlesum+=nums[i];
8             if(nums[i]>9) doublesum+=nums[i];
9        }
10        return singlesum!=doublesum;
11    }
12};