// Last updated: 7/17/2026, 1:54:20 PM
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int left = 0;
7        int ans = 0;
8
9        for (int right = 0; right < nums.size(); right++) {
10
11            while (nums[right] - nums[left] > 1) {
12                left++;
13            }
14
15            if (nums[right] - nums[left] == 1) {
16                ans = max(ans, right - left + 1);
17            }
18        }
19
20        return ans;
21    }
22};