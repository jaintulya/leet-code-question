// Last updated: 8/20/2026, 4:56:35 PM
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