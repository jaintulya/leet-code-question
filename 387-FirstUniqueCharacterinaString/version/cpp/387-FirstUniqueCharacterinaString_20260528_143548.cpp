// Last updated: 5/28/2026, 2:35:48 PM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4      unordered_map<char,int>mp;
5
6      for(int i=0; i<s.size();i++){
7        mp[s[i]]++;
8      }
9
10      for(int j=0 ; j<s.size();j++){
11        if(mp[s[j]]==1){
12            return j;
13        }
14      }
15      return -1;
16    }
17};