// Last updated: 5/3/2026, 10:09:06 PM
1class Solution {
2public:
3    string firstPalindrome(vector<string>& words) {
4        for (string s : words) {
5            int i = 0; //abc //ada //racecar
6            int j = s.size()-1; //5
7
8            while (i<j && s[i]==s[j]){
9                i++; //3
10                j--;//3
11            }
12
13            if(i>=j) return s;
14        }
15
16        return "";
17    }
18};