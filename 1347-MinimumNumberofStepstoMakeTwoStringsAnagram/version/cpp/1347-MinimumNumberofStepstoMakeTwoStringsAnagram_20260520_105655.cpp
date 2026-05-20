// Last updated: 5/20/2026, 10:56:55 AM
1class Solution {
2public:
3    int minSteps(string s, string t) {
4
5        vector<int> freq(26, 0);
6
7        for(int i = 0; i < s.size(); i++) {
8            freq[s[i] - 'a']++;
9        }
10
11        for(int i = 0; i < t.size(); i++) {
12            freq[t[i] - 'a']--;
13        }
14
15        int steps = 0;
16
17        for(int i = 0; i < 26; i++) {
18
19            if(freq[i] > 0) {
20                steps += freq[i];
21            }
22        }
23
24        return steps;
25    }
26};