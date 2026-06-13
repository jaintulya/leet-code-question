// Last updated: 6/13/2026, 1:58:39 PM
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        int n = word.find(ch);
5
6        if(n != -1){
7            reverse(word.begin(),word.begin()+n+1);
8        }
9        return word;
10
11    }
12};