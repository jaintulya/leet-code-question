// Last updated: 5/21/2026, 11:53:19 PM
1class Solution {
2public:
3    bool checkPowersOfThree(int n) {
4        while(n>0){
5if(n%3==2) return false;
6
7n/=3;
8            
9        }
10
11        return true;
12    }
13};