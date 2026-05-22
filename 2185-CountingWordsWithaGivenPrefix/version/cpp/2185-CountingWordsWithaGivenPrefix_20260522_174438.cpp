// Last updated: 5/22/2026, 5:44:38 PM
1class Solution {
2public:
3    int maximum69Number (int num) {
4
5        string s = to_string(num);
6
7        for(int i = 0; i < s.length(); i++) {
8
9            if(s[i] == '6') {
10
11                s[i] = '9';
12
13                break;
14            }
15        }
16
17        return stoi(s);
18    }
19};