// Last updated: 8/25/2026, 1:56:14 PM
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4        vector<int> ans;
5        for (left; left <= right; left++) {
6            bool valid = true;
7            int temp = left;
8            while (temp > 0) {
9
10                int digit = temp % 10;
11                      if (digit == 0 || left % digit != 0) {
12                    valid = false;
13                    break;
14                }
15
16                temp=temp/10;
17            }
18            if (valid) {
19                ans.push_back(left);
20            }
21        }
22        return ans;
23    }
24};