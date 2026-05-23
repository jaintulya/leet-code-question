// Last updated: 5/23/2026, 10:17:18 PM
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4
5        sort(candyType.begin(), candyType.end());
6
7        int candycount = 1;
8
9        int n = candyType.size();
10
11        for (int i = 1; i < n; i++) {
12
13            if (candyType[i] != candyType[i - 1]) {
14
15                candycount++;
16            }
17        }
18
19        return min(candycount, n / 2);
20    }
21};