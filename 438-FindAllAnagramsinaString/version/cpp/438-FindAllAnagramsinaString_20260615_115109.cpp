// Last updated: 6/15/2026, 11:51:09 AM
1class Solution {
2public:
3    bool areOccurrencesEqual(string s) {
4        unordered_map<char, int> mp;
5
6        for (char ch : s) {
7            mp[ch]++;
8        }
9
10        int freq = mp.begin()->second;
11
12        for (auto &p : mp) {
13            if (p.second != freq) {
14                return false;
15            }
16        }
17
18        return true;
19    }
20};