// Last updated: 5/23/2026, 10:14:07 PM
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4           sort(candyType.begin(), candyType.end());
5        int candycount = 1;
6        int ans = 0;
7        int n = candyType.size();
8        for (int i = 1; i < n; i++) {
9            if (candyType[i] != candyType[i-1]) {
10                candycount++;
11            }
12        }
13        if (candycount > n / 2) {
14            ans = n/2;
15        } else {
16            ans = candycount;
17        }
18
19        return ans;
20    }
21};