// Last updated: 8/17/2026, 2:02:59 PM
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        int ans = 0;
8
9        for (int i = 1; i < nums.size(); i++) {
10
11            if (nums[i] <= nums[i - 1]) {
12
13                int required = nums[i - 1] + 1;
14
15                ans += required - nums[i];
16
17                nums[i] = required;
18            }
19        }
20
21        return ans;
22    }
23};