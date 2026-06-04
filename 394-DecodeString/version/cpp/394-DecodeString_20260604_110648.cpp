// Last updated: 6/4/2026, 11:06:48 AM
1class Solution {
2public:
3    string decodeString(string s) {
4              stack<int> countStack;
5        stack<string> stringStack;
6
7        string curr = "";
8        int num = 0;
9
10        for (char ch : s) {
11
12            if (isdigit(ch)) {
13                num = num * 10 + (ch - '0');
14            }
15
16            else if (ch == '[') {
17                countStack.push(num);
18                stringStack.push(curr);
19
20                num = 0;
21                curr = "";
22            }
23
24            else if (ch == ']') {
25                int repeat = countStack.top();
26                countStack.pop();
27
28                string prev = stringStack.top();
29                stringStack.pop();
30
31                string temp = "";
32
33                for (int i = 0; i < repeat; i++) {
34                    temp += curr;
35                }
36
37                curr = prev + temp;
38            }
39
40            else {
41                curr += ch;
42            }
43        }
44
45        return curr;
46    }
47};