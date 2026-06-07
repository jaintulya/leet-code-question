// Last updated: 6/7/2026, 6:40:45 PM
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4
5        int count = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8
9            for(int j = i + 1; j < nums.size(); j++) {
10
11                if(nums[i] == nums[j]) {
12                    count++;
13                }
14            }
15        }
16
17        return count;
18    }
19};