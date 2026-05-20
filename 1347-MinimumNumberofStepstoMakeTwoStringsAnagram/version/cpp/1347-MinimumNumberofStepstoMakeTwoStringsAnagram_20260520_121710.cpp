// Last updated: 5/20/2026, 12:17:10 PM
1class Solution {
2public:
3    int maxFreqSum(string s) {
4        vector<int> freq(26, 0);
5        int maxvowel = 0;
6        int maxconso = 0;
7
8        for (char ch : s) {
9            freq[ch - 'a']++;
10        }
11
12        for (int i = 0; i < 26; i++) {
13            if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
14                if (freq[i] > maxvowel) {
15                    maxvowel = freq[i];
16                }
17            }
18            else if(freq[i]>maxconso){
19                maxconso=freq[i];
20            }
21        }
22        return maxconso+maxvowel;
23    }
24};