// Last updated: 7/16/2026, 2:29:57 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4
5        int left = 0;
6        int right = height.size() - 1;
7
8        int ans = 0;
9
10        while (left < right) {
11
12            int width = right - left;
13
14            int h = min(height[left], height[right]);
15
16            ans = max(ans, width * h);
17
18            if (height[left] < height[right])
19                left++;
20            else
21                right--;
22        }
23
24        return ans;
25    }
26};