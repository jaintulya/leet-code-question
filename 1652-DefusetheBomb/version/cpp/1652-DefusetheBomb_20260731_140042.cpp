// Last updated: 7/31/2026, 2:00:42 PM
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4
5        int n = code.size();
6        vector<int> ans(n, 0);
7
8        if (k == 0)
9            return ans;
10
11        int start, end;
12
13        if (k > 0) {
14            start = 1;
15            end = k;
16        } else {
17            start = n + k;
18            end = n - 1;
19            k = -k;
20        }
21
22        // Initial window sum
23        int sum = 0;
24        for (int i = start; i <= end; i++) {
25            sum += code[i % n];
26        }
27
28        // Slide the window
29        for (int i = 0; i < n; i++) {
30            ans[i] = sum;
31
32            sum -= code[start % n];
33            start++;
34
35            end++;
36            sum += code[end % n];
37        }
38
39        return ans;
40    }
41};