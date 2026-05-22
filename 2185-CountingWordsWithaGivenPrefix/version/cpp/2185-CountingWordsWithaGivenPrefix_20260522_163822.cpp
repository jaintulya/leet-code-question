// Last updated: 5/22/2026, 4:38:22 PM
1class Solution {
2public:
3    int prefixCount(vector<string>& words, string pref) {
4
5        int count = 0;
6
7        for(string word : words) {
8
9            if(word.find(pref) == 0) {
10
11                count++;
12            }
13        }
14
15        return count;
16    }
17};