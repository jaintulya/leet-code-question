// Last updated: 8/3/2026, 2:03:24 PM
1class Solution {
2public:
3    int minimumPushes(string word) {
4       
5       vector<int> arr(26,0);
6
7        int sum=0;
8for(int i=0; i<word.size();i++){
9arr[word[i]-'a']++;
10
11}
12
13
14
15sort(arr.begin(), arr.end(),greater<int>());
16
17for(int j=0;j<arr.size();j++){
18    if(j<=7){
19        sum+=+arr[j]*1;
20    } else
21     if(j<=15){
22        sum=sum+arr[j]*2;
23    } else
24     if(j<=23){
25        sum=sum+arr[j]*3;
26    } else
27     {
28        sum=sum+arr[j]*4;
29    }
30
31}
32
33return sum;
34    }
35};