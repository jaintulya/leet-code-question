// Last updated: 5/17/2026, 6:38:56 PM
1class Solution {
2public:
3    int reverseDegree(string s) {
4        int sum=0;
5        for(int i=0 ;i<s.size();i++){
6            int index='z'+1-s[i];
7
8            sum+=index*(i+1);
9
10        }
11        return sum;
12    }
13};