// Last updated: 5/1/2026, 7:30:40 PM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        vector<int> result;
7
8        for (int i = 0; i < nums.size(); i += 2) {
9            result.push_back(nums[i+1]);
10            result.push_back(nums[i]);
11        }
12        return result;
13    }
14};