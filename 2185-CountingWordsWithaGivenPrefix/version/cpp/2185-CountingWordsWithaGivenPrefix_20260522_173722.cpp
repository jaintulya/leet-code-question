// Last updated: 5/22/2026, 5:37:22 PM
1class Solution {
2public:
3    string defangIPaddr(string address) {
4
5        string ans = "";
6
7        for(int i = 0; i < address.length(); i++) {
8
9            if(address[i] == '.') {
10
11                ans += "[.]";
12            }
13
14            else {
15
16                ans += address[i];
17            }
18        }
19
20        return ans;
21    }
22};