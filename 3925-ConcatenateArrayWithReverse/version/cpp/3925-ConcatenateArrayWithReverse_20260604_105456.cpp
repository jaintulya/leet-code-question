// Last updated: 6/4/2026, 10:54:56 AM
1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        
5
6
7        vector<int> ans;
8
9        for(int num : nums) {
10            ans.push_back(num);
11        }
12
13        for(int i = nums.size() - 1; i >= 0; i--) {
14            ans.push_back(nums[i]);
15        }
16
17        return ans;
18    }
19};
20  