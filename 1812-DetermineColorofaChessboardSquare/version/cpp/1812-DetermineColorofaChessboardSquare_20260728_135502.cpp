// Last updated: 7/28/2026, 1:55:02 PM
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        return ((coordinates[0] + coordinates[1]) % 2 != 0);
5    }
6};