// Last updated: 7/30/2026, 2:20:26 PM
1class Solution {
2public:
3    string compressedString(string word) {
4        char ch = word[0];
5        int count = 0;
6        string str = "";
7
8        for (int i = 0; i < word.size(); i++) {
9
10            if (ch == word[i]) {
11                count++;
12            }
13            else {
14
15                while (count > 9) {
16                    str += "9";
17                    str += ch;
18                    count -= 9;
19                }
20
21                str += to_string(count);
22                str += ch;
23
24                ch = word[i];
25                count = 1;
26            }
27        }
28
29        
30        while (count > 9) {
31            str += "9";
32            str += ch;
33            count -= 9;
34        }
35
36        str += to_string(count);
37        str += ch;
38
39        return str;
40    }
41};