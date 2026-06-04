// Last updated: 6/4/2026, 10:50:32 AM
1class Solution {
2public:
3    vector<int> findDegrees(vector<vector<int>>& matrix) {
4
5        int n = matrix.size();
6
7        vector<int> ans(n, 0);
8
9        for(int i = 0; i < n; i++) {
10
11            int degree = 0;
12
13            for(int j = 0; j < n; j++) {
14
15                if(matrix[i][j] == 1) {
16
17                    degree++;
18                }
19            }
20
21            ans[i] = degree;
22        }
23
24        return ans;
25    }
26};