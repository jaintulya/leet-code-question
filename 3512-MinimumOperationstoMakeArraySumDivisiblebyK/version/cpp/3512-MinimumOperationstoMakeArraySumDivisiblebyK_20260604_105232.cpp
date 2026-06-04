// Last updated: 6/4/2026, 10:52:32 AM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4
5        int sum = 0;
6
7        for(int num : nums) {
8            sum += num;
9        }
10
11        return sum % k;
12    }
13};