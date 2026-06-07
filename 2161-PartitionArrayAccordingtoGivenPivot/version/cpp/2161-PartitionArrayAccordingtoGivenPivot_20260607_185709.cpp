// Last updated: 6/7/2026, 6:57:09 PM
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4
5        vector<int> ans;
6
7        for(int num : nums) {
8            if(num < pivot) {
9                ans.push_back(num);
10            }
11        }
12
13        for(int num : nums) {
14            if(num == pivot) {
15                ans.push_back(num);
16            }
17        }
18
19        for(int num : nums) {
20            if(num > pivot) {
21                ans.push_back(num);
22            }
23        }
24
25        return ans;
26    }
27};