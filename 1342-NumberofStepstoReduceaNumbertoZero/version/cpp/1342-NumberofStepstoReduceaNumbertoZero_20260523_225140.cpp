// Last updated: 5/23/2026, 10:51:40 PM
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4
5        unordered_map<int,int> mp;
6
7        vector<int> ans;
8
9        for(int num : nums1) {
10
11            mp[num]++;
12        }
13
14        for(int num : nums2) {
15
16            if(mp[num] > 0) {
17
18                ans.push_back(num);
19
20                mp[num]--;
21            }
22        }
23
24        return ans;
25    }
26};