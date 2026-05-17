// Last updated: 5/17/2026, 6:21:41 PM
1class Solution {
2public:
3    string clearDigits(string s) {
4
5        string ans = "";
6
7        for(int i = 0; i < s.size(); i++) {
8
9            if(isdigit(s[i])) {
10
11                ans.pop_back();
12            }
13
14            else {
15
16                ans += s[i];
17            }
18        }
19
20        return ans;
21    }
22};