// Last updated: 6/8/2026, 5:57:11 PM
1class Solution {
2public:
3    int countConsistentStrings(string allowed, vector<string>& words) {
4
5        int count = 0;
6
7        for(string word : words) {
8
9            bool valid = true;
10
11            for(char ch : word) {
12
13                if(allowed.find(ch) == string::npos) {
14                    valid = false;
15                    break;
16                }
17            }
18
19            if(valid) {
20                count++;
21            }
22        }
23
24        return count;
25    }
26};