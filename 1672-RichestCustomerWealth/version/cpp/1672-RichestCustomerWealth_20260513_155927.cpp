// Last updated: 5/13/2026, 3:59:27 PM
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4
5        int maxWealth = 0;
6
7        for(int i = 0; i < accounts.size(); i++){
8
9            int sum = 0;
10
11            for(int j = 0; j < accounts[i].size(); j++){
12                sum += accounts[i][j];
13            }
14
15            maxWealth = max(maxWealth, sum);
16        }
17
18        return maxWealth;
19    }
20};