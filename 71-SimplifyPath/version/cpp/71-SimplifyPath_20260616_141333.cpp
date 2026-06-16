// Last updated: 6/16/2026, 2:13:33 PM
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        string cur = "";
6        int i = 0;
7
8        while (i <= path.size()) {
9            if (i == path.size() || path[i] == '/') {
10                if (cur == "..") {
11                    if (!st.empty()) st.pop_back();
12                }
13                else if (!cur.empty() && cur != ".") {
14                    st.push_back(cur);
15                }
16                cur = "";
17            } else {
18                cur += path[i];
19            }
20            i++;
21        }
22
23        string ans = "";
24        for (string &dir : st) {
25            ans += "/" + dir;
26        }
27
28        return ans.empty() ? "/" : ans;
29    }
30};