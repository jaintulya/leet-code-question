// Last updated: 5/16/2026, 11:23:31 AM
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string ans = "";
5
6        int i = 0;
7        int j = 0;
8
9        while (i < word1.size() && j < word2.size()) {
10            ans += word1[i];
11            ans += word2[j];
12            i++;
13            j++;
14        }
15
16        while (i < word1.size()) {
17            ans += word1[i];
18            i++;
19        }
20        while (j < word2.size()) {
21            ans += word2[j];
22            j++;
23        }
24        return ans;
25    }
26};