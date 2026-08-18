// Last updated: 8/18/2026, 1:38:13 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int count=0;
5     if(nums.size()==1){
6        return 0;
7     }   
8for(int i=1;i<nums.size();i++){
9    while(nums[i]
10<=nums[i-1]){
11        nums[i]++;
12        count++;
13    }
14}
15return count;
16
17    }
18};