// Last updated: 5/22/2026, 4:51:12 PM
1class Solution {
2public:
3    int numberOfMatches(int n) {
4        int match_played = 0;
5     
6        while (n > 1) {
7            if (n % 2 == 0) {
8                match_played+=n/2;
9               n=n/2;
10                
11            }
12            else {
13                match_played+=(n-1)/2;
14                n=(n-1)/2+1;
15            
16
17            }
18        }
19        return match_played;
20    }
21};