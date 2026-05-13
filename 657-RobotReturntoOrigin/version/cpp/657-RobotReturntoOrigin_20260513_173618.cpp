// Last updated: 5/13/2026, 5:36:18 PM
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4
5        int x = 0;
6        int y = 0;
7
8        for(int i = 0; i < moves.size(); i++) {
9
10            if(moves[i] == 'U') {
11                y++;
12            }
13
14            else if(moves[i] == 'D') {
15                y--;
16            }
17
18            else if(moves[i] == 'R') {
19                x++;
20            }
21
22            else if(moves[i] == 'L') {
23                x--;
24            }
25        }
26
27        return x == 0 && y == 0;
28    }
29};