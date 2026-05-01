// Last updated: 5/1/2026, 5:14:16 PM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        vector<bool> check(26, false);
5        for (char ch : sentence) {
6
7            check[ch - 'a'] = true;
8            // b=98 a=97 98-97=1
9            //  o=111 a=97 o-a -> 111-97=14
10        }
11
12        for (bool var : check) {
13            if (!var)
14                return false;
15        }
16        return true;
17    }
18};