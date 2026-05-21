// Last updated: 5/21/2026, 10:08:26 PM
1class Solution {
2public:
3    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
4
5        string a = "";
6        string b = "";
7        string c = "";
8
9        for(char ch : firstWord) {
10            a += (ch - 'a') + '0' ;
11        }
12
13        for(char ch : secondWord) {
14            b += (ch - 'a') + '0';
15        }
16
17        for(char ch : targetWord) {
18            c += (ch - 'a') + '0';
19        }
20
21        return stoi(a) + stoi(b) == stoi(c);
22    }
23};