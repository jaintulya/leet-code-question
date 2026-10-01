// Last updated: 10/1/2026, 9:17:26 AM
1class Solution {
2public:
3    string removeTrailingZeros(string num) {
4        while(num.back()=='0'){
5            num.pop_back();
6        }
7
8        return num;
9    }
10};