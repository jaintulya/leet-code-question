// Last updated: 5/20/2026, 11:57:24 AM
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        vector<int> freq(26, 0);
5        for (char ch : t) {
6            freq[ch - 'a']++;
7        }
8
9        for (char ch : s) {
10            freq[ch - 'a']--;
11        }
12        for (int i = 0; i < freq.size(); i++) {
13            if (freq[i] != 0)
14                return i + 'a';
15        }
16
17        return ' ';
18    }
19};