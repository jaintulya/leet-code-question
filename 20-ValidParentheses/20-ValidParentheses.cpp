// Last updated: 4/30/2026, 9:57:40 AM
1#include <vector>
2using namespace std;
3
4class Solution {
5public:
6    bool isValid(string s) {
7        vector<char> st;
8
9        for (char c : s) {
10            if (c == '(' || c == '{' || c == '[') {
11                st.push_back(c);
12            } else {
13                if (st.empty()) return false;
14
15                char top = st.back();
16                st.pop_back();
17
18                if ((c == ')' && top != '(') ||
19                    (c == '}' && top != '{') ||
20                    (c == ']' && top != '[')) {
21                    return false;
22                }
23            }
24        }
25
26        return st.empty();
27    }
28};