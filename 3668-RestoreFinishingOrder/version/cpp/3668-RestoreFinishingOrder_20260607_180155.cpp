// Last updated: 6/7/2026, 6:01:55 PM
1class Solution {
2public:
3    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
4        unordered_set<int> st(friends.begin(), friends.end());
5        vector<int> ans;
6
7        for (int num : order) {
8
9            if (st.count(num)) {
10                ans.push_back(num);
11            }
12        }
13        return ans;
14    }
15};