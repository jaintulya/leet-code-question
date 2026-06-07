// Last updated: 6/7/2026, 6:14:58 PM
1class Solution {
2public:
3    int scoreOfString(string s) {
4        int score=0;
5
6        for(int i=0 ;i<s.size()-1;i++){
7
8            score+=abs(s[i]-s[i+1]);
9
10        }
11
12        return score ;
13
14    }
15};