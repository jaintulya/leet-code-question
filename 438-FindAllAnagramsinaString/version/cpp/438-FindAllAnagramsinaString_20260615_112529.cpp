// Last updated: 6/15/2026, 11:25:29 AM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        vector<int> ans;
5        unordered_map<char, int> pMap;
6
7        if (p.size() > s.size())
8            return ans;
9
10        for (char c : p)
11            pMap[c]++;
12
13        int k = p.size();
14
15        for (int i = 0; i <= s.size() - k; i++) {
16            unordered_map<char, int> m;
17
18            for (int j = i; j < i + k; j++) {
19                m[s[j]]++;
20            }
21
22            if (m == pMap) {
23                ans.push_back(i);
24            }
25        }
26
27        return ans;
28    }
29};