// Last updated: 7/23/2026, 1:58:00 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool increasing = true;
5        bool decreasing = true;
6
7        for (int i = 0; i < nums.size() - 1; i++) {
8            if (nums[i] < nums[i + 1])
9                decreasing = false;
10            else if (nums[i] > nums[i + 1])
11                increasing = false;
12
13            if (!increasing && !decreasing)
14                return false;
15        }
16
17        return true;
18    }
19};