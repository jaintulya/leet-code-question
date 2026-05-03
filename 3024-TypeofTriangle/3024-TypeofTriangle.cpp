// Last updated: 5/3/2026, 5:34:44 PM
1class Solution {
2public:
3    int countDigits(int num) {
4        int n = num; //121
5        int count = 0;
6        while (n > 0) {
7            int digit= n%10;  //1 //2 //1
8            if(num%digit==0){  //121%1 
9                count++; //count=2
10            }
11            n=n/10; //12 //1 //0
12        }
13        return count;
14    }
15};