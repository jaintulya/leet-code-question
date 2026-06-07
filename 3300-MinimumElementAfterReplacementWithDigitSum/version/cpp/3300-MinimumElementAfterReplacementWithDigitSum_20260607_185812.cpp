// Last updated: 6/7/2026, 6:58:12 PM
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4
5        int ans = INT_MAX;
6
7        for(int num : nums) {
8
9            int sum = 0;
10
11            while(num > 0) {
12                sum += num % 10;
13                num /= 10;
14            }
15
16            ans = min(ans, sum);
17        }
18
19        return ans;
20    }
21};