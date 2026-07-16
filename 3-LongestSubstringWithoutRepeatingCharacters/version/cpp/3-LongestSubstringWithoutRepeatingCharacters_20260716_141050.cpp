// Last updated: 7/16/2026, 2:10:50 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4
5        unordered_map<char, int> mp;
6
7        int left = 0;
8        int ans = 0;
9
10        for (int right = 0; right < s.size(); right++) {
11
12            mp[s[right]]++;
13
14            while (mp[s[right]] > 1) {
15                mp[s[left]]--;
16
17                if (mp[s[left]] == 0)
18                    mp.erase(s[left]);
19
20                left++;
21            }
22
23            ans = max(ans, right - left + 1);
24        }
25
26        return ans;
27    }
28};