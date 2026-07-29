// Last updated: 7/29/2026, 2:15:43 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4
5        sort(nums.begin(), nums.end());
6
7        int minans = nums[0] + nums[1] + nums[2];
8
9        for (int i = 0; i < nums.size() - 2; i++) {
10
11            int left = i + 1;
12            int right = nums.size() - 1;
13
14            while (left < right) {
15
16                int sum = nums[i] + nums[left] + nums[right];
17
18                if (sum == target)
19                    return target;
20
21                if (abs(sum - target) < abs(minans - target))
22                    minans = sum;
23
24                if (sum < target)
25                    left++;
26                else
27                    right--;
28            }
29        }
30
31        return minans;
32    }
33};