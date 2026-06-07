// Last updated: 6/7/2026, 6:54:06 PM
1class Solution {
2public:
3    vector<int> transformArray(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); i++) {
5            if (nums[i] % 2 == 0) {
6                nums[i] = 0;
7
8            } else
9                nums[i] = 1;
10        }
11
12        sort(nums.begin(),nums.end());
13
14        return nums;
15    }
16};