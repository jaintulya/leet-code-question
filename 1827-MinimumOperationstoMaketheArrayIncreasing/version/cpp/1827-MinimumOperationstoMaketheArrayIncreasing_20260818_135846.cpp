// Last updated: 8/18/2026, 1:58:46 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int count=0;
5     if(nums.size()==1){
6        return 0;
7     }   
8for(int i=1;i<nums.size();i++){
9if(nums[i] <= nums[i-1]) {
10    int max = nums[i-1] + 1;
11    count += max - nums[i];
12    nums[i] = max;
13}
14}
15return count;
16
17    }
18};