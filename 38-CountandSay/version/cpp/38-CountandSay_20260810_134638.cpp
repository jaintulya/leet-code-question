// Last updated: 8/10/2026, 1:46:38 PM
1class Solution {
2public:
3    string countAndSay(int n) {
4        string s = "1";
5
6        for (int i = 1; i < n; i++) {
7            string temp = "";
8
9            for (int j = 0; j < s.size(); j++) {
10                int count = 1;
11
12                while (j + 1 < s.size() && s[j] == s[j + 1]) {
13                    count++;
14                    j++;
15                }
16
17                temp += to_string(count) + s[j];
18            }
19
20            s = temp;
21        }
22
23        return s;
24    }
25};