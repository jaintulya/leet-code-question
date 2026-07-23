// Last updated: 7/23/2026, 1:49:09 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        int inc=0;
5        int dec=0;
6        for(int i=0;i<nums.size()-1;i++){
7            if(nums[i]<=nums[i+1]) inc++;
8              if(nums[i+1]<=nums[i]) dec++;
9        }
10
11        if(inc==nums.size()-1||dec==nums.size()-1){
12            return true;
13           
14        } else return false;
15    }
16};