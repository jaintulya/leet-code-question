// Last updated: 6/8/2026, 5:58:47 PM
1class Solution {
2public:
3    vector<int> findArray(vector<int>& pref) {
4
5        vector<int> ans;
6
7        ans.push_back(pref[0]);
8
9        for(int i = 1; i < pref.size(); i++) {
10
11            ans.push_back(pref[i] ^ pref[i - 1]);
12        }
13
14        return ans;
15    }
16};