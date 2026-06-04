// Last updated: 6/4/2026, 11:03:52 AM
1class Solution {
2public:
3    int maxDistinct(string s) {
4
5        vector<int> freq(26, 0);
6
7        int count = 0;
8
9        for(char ch : s) {
10
11            if(freq[ch - 'a'] == 0) {
12
13                count++;
14            }
15
16            freq[ch - 'a']++;
17        }
18
19        return count;
20    }
21};