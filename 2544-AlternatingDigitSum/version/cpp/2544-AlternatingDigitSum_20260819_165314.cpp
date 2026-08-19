// Last updated: 8/19/2026, 4:53:14 PM
1class Solution {
2public:
3    int alternateDigitSum(int n) {
4        vector<int> ans;
5        int sum = 0;
6        int digit = 0;
7int count=0;
8        while (n > 0) {
9            digit = n % 10;
10            n = n / 10;
11            ans.push_back(digit);
12        }
13
14        for (int i = ans.size() - 1; i >= 0; i--) {
15            if (count%2== 0) {
16                sum += ans[i];
17              
18            } else {
19                sum -= ans[i];
20         
21            }
22              count++;
23        }
24
25        return sum;
26    }
27};