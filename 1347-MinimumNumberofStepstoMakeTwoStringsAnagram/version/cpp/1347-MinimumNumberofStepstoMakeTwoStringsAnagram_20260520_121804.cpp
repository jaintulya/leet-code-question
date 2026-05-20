// Last updated: 5/20/2026, 12:18:04 PM
1class Solution {
2public:
3    int maxFreqSum(string s) {
4
5        vector<int> freq(26, 0);
6
7        for(char ch : s) {
8            freq[ch - 'a']++;
9        }
10
11        int vowelMax = 0;
12        int consoMax = 0;
13
14        for(int i = 0; i < 26; i++) {
15
16            char ch = i + 'a';
17
18            if(ch == 'a' || ch == 'e' || ch == 'i' ||
19               ch == 'o' || ch == 'u') {
20
21                vowelMax = max(vowelMax, freq[i]);
22            }
23
24            else {
25
26                consoMax = max(consoMax, freq[i]);
27            }
28        }
29
30        return vowelMax + consoMax;
31    }
32};