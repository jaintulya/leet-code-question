// Last updated: 5/28/2026, 5:03:49 PM
1class Solution {
2public:
3    int minLengthAfterRemovals(string s) {
4        int ac = 0;
5        int bc = 0;
6        int totalcount = 0;
7
8        for(char ch:s){
9            if(ch=='a') ac++;
10            else bc++;
11
12
13        }
14        totalcount=min(ac,bc);
15
16        return s.size()-totalcount*2;
17    }
18};