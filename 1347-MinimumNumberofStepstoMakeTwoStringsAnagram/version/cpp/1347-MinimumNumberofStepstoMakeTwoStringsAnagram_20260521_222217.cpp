// Last updated: 5/21/2026, 10:22:17 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4
5        vector<int> freq(nums.size() + 1, 0);
6
7        vector<int> ans;
8
9        for(int i = 0; i < nums.size(); i++) {
10
11            freq[nums[i]]++;
12        }
13
14        for(int i = 1; i < freq.size(); i++) {
15
16            if(freq[i] == 0) {
17
18                ans.push_back(i);
19            }
20        }
21
22        return ans;
23    }
24};