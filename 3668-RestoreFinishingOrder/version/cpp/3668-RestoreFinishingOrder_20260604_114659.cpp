// Last updated: 6/4/2026, 11:46:59 AM
1class Solution {
2public:
3    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
4
5        unordered_set<int> st(friends.begin(), friends.end());
6
7        vector<int> ans;
8
9        for(int num : order) {
10
11            if(st.count(num)) {
12                ans.push_back(num);
13            }
14        }
15
16        return ans;
17    }
18};