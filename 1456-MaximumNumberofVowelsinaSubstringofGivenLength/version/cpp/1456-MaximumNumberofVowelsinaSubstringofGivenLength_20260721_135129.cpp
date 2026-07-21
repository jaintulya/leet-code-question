// Last updated: 7/21/2026, 1:51:29 PM
1class Solution {
2public:
3    bool isVowel(char c) {
4        return c == 'a' || c == 'e' || c == 'i' ||
5               c == 'o' || c == 'u';
6    }
7
8    int maxVowels(string s, int k) {
9        int count = 0;
10
11      
12        for (int i = 0; i < k; i++) {
13            if (isVowel(s[i])) count++;
14        }
15
16        int maxi = count;
17
18     
19        for (int right = k; right < s.size(); right++) {
20            if (isVowel(s[right])) count++;
21            if (isVowel(s[right - k])) count--;
22
23            maxi = max(maxi, count);
24        }
25
26        return maxi;
27    }
28};