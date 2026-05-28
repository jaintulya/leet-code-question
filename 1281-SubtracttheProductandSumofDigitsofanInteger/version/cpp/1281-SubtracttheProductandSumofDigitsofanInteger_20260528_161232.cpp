// Last updated: 5/28/2026, 4:12:32 PM
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int maxWealth = 0;
5        for (int i = 0; i < accounts.size(); i++) {
6
7            int sum = 0;
8
9            for(int j=0 ; j<accounts[i].size();j++){
10                sum+=accounts[i][j];
11            }
12
13            maxWealth=max(maxWealth,sum);
14        }
15        return maxWealth;
16
17    }
18};