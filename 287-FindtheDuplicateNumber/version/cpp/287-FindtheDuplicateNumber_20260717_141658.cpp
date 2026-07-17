// Last updated: 7/17/2026, 2:16:58 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4
5        int slow = nums[0];
6        int fast = nums[0];
7
8        // Step 1: Find meeting point
9        do {
10            slow = nums[slow];
11            fast = nums[nums[fast]];
12        } while (slow != fast);
13
14        // Step 2: Find duplicate
15        slow = nums[0];
16
17        while (slow != fast) {
18            slow = nums[slow];
19            fast = nums[fast];
20        }
21
22        return slow;
23    }
24};