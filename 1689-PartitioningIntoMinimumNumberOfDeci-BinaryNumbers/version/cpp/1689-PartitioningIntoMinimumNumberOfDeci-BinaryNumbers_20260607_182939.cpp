// Last updated: 6/7/2026, 6:29:39 PM
1class Solution {
2public:
3    int minPartitions(string n) {
4
5        int maxi = 0;
6
7        for(char ch : n) {
8
9            maxi = max(maxi, ch - '0');
10        }
11
12        return maxi;
13    }
14};