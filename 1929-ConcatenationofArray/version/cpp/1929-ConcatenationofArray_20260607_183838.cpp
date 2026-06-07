// Last updated: 6/7/2026, 6:38:38 PM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans = nums;
5
6        for (int num : nums) {
7            ans.push_back(num);
8        }
9
10        return ans;
11    }
12};