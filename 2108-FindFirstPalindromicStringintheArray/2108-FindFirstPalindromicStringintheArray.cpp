// Last updated: 4/30/2026, 1:37:31 PM
1class Solution {
2public:
3    string firstPalindrome(vector<string>& words) {
4        for(string &s:words){
5            int i=0,j=s.size()-1;
6            while(i<j && s[i]==s[j]){
7                i++;
8                j--;
9            }
10            if(i>=j)return s;
11        
12        }
13        return "";
14    }
15};