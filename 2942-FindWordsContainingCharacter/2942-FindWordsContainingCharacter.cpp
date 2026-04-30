// Last updated: 4/30/2026, 3:10:35 PM
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> result;
5
6        for (int i = 0; i < words.size(); i++) {
7            for (char c : words[i]) {
8                if (c == x) {
9                    result.push_back(i);
10                    break;  
11                }
12            }
13        }
14
15        return result;
16    }
17};