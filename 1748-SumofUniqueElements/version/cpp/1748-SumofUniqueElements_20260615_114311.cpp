// Last updated: 6/15/2026, 11:43:11 AM
1class Solution {
2public:
3    int sumOfUnique(vector<int>& nums) {
4        vector<int> freq(101, 0);
5
6        for (int i = 0; i < nums.size(); i++) {
7            freq[nums[i]]++;
8        }
9
10        int sum = 0;
11
12        for (int j = 1; j <= 100; j++) {
13            if (freq[j] == 1) {
14                sum += j;
15            }
16        }
17
18        return sum;
19    }
20};