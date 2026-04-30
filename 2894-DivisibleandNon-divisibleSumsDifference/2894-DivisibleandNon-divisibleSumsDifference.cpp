// Last updated: 4/30/2026, 2:18:32 PM
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4        int num1=0;
5        int num2=0;
6        for(int i=1; i<=n ; i++){
7            if(i%m!=0) num1+=i;
8        
9        if(i%m==0) num2+=i;}
10        return num1-num2;
11    }
12    
13};