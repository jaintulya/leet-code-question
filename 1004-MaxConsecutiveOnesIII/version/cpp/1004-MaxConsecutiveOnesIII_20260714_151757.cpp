// Last updated: 7/14/2026, 3:17:57 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left = 0;
5        int zeroCount = 0;
6        int maxLength = 0;
7
8        for (int right = 0; right < nums.size(); right++) {
9            
10            if (nums[right] == 0) {
11                zeroCount++;
12            }
13
14            while (zeroCount > k) {
15                if (nums[left] == 0) {
16                    zeroCount--;
17                }
18                left++;
19            }
20
21            maxLength = max(maxLength, right - left + 1);
22        }
23
24        return maxLength;
25    }
26};