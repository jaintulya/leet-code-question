// Last updated: 5/23/2026, 10:34:50 PM
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4
5        vector<int> freq(26, 0);
6
7        for(char ch : magazine) {
8
9            freq[ch - 'a']++;
10        }
11
12        for(char ch : ransomNote) {
13
14            freq[ch - 'a']--;
15
16            if(freq[ch - 'a'] < 0) {
17
18                return false;
19            }
20        }
21
22        return true;
23    }
24};