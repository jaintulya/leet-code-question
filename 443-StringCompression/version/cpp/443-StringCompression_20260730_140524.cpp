// Last updated: 7/30/2026, 2:05:24 PM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        char ch = chars[0];
5
6        int count = 0;
7        string str = "";
8        for (int i = 0; i < chars.size(); i++) {
9            if (ch == chars[i])
10                count++;
11            else {
12
13                str += ch;
14
15                if (count > 1){
16                    str += to_string(count);
17            }
18            count = 1;
19            ch = chars[i];
20        }
21    }
22    if (count > 0) {
23
24        str += ch;
25
26        if (count > 1)
27            str += to_string(count);
28    };
29    chars.clear();
30    for (int j = 0; j < str.size(); j++) {
31        chars.push_back(str[j]);
32    }
33    return chars.size();
34}
35}
36;