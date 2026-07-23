// Last updated: 7/23/2026, 1:36:07 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4
5        int maximum = 0;
6
7        for (int i = 0; i < candies.size(); i++) {
8            maximum = max(maximum, candies[i]);
9        }
10
11        vector<bool> ans(candies.size(), false);
12
13        for (int i = 0; i < candies.size(); i++) {
14            if (candies[i] + extraCandies >= maximum) {
15                ans[i] = true;
16            }
17        }
18
19        return ans;
20    }
21};