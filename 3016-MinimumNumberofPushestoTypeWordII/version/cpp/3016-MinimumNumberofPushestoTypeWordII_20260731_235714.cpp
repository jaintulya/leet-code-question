// Last updated: 7/31/2026, 11:57:14 PM
1class Solution {
2public:
3    int minimumPushes(string word) {
4       
5        unordered_map<char,int> m;
6        int sum=0;
7for(int i=0; i<word.size();i++){
8m[word[i]]++;
9
10}
11vector<int> v;
12
13for (auto x : m) {
14    v.push_back(x.second);
15}
16
17sort(v.begin(), v.end(),greater<int>());
18
19for(int j=0;j<v.size();j++){
20    if(j<=7){
21        sum+=+v[j]*1;
22    } else
23     if(j<=15){
24        sum=sum+v[j]*2;
25    } else
26     if(j<=23){
27        sum=sum+v[j]*3;
28    } else
29     {
30        sum=sum+v[j]*4;
31    }
32
33}
34
35return sum;
36    }
37};