// Last updated: 6/7/2026, 6:34:05 PM
1class Solution {
2public:
3    int alternatingSum(vector<int>& nums) {
4
5        int sum = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8            sum += (i % 2 == 0 ? nums[i] : -nums[i]);
9        }
10
11        return sum;
12    }
13};