// Last updated: 5/28/2026, 5:19:31 PM
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4     string ans="";
5
6     int i=0;
7     int j=0;
8
9     while(i<word1.size() && j<word2.size()){
10        ans+=word1[i];
11        ans+=word2[j];
12
13        i++;
14        j++;
15
16     }
17
18
19while(i<word1.size()){
20    ans+=word1[i];
21    i++;
22}
23
24while(j<word2.size()){
25    ans+=word2[j];
26    j++;
27
28}
29return ans;
30
31    }
32};