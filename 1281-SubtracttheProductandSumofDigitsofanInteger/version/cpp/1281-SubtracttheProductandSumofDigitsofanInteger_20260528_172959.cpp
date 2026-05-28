// Last updated: 5/28/2026, 5:29:59 PM
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x = 0;
5        int y = 0;
6        for (int i = 0; i < moves.size(); i++) {
7            if (moves[i] == 'U') {
8                y++;
9            } else if (moves[i] == 'D') {
10                y--;
11            } else if (moves[i] == 'L') {
12                x--;
13            } else if (moves[i] == 'R') {
14                x++;
15            }
16        }
17        return x==0 && y==0; 
18    }
19};