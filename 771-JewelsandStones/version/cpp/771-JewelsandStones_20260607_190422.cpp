// Last updated: 6/7/2026, 7:04:22 PM
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        int count=0;
5
6        for(char stone:stones){
7            if(jewels.find(stone)!=string::npos){
8                count++;
9            }
10        }
11        return count;
12    }
13};