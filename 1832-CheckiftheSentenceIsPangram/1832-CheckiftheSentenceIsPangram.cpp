// Last updated: 5/1/2026, 4:57:04 PM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        vector<bool> check(26, false);
5
6        for (char ch : sentence) {
7
8            check[ch - 'a'] = true;
9        }
10        for (bool val : check) {
11            if (!val)
12                return false;
13        }
14
15        return true;
16    }
17};