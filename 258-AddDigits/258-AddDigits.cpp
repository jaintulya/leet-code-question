// Last updated: 4/30/2026, 3:09:39 AM
1class Solution {
2public:
3    int addDigits(int num) {
4        if(num==0){
5            return 0;
6        }
7
8        return (num%9==0)? 9 :num%9;
9    }
10};