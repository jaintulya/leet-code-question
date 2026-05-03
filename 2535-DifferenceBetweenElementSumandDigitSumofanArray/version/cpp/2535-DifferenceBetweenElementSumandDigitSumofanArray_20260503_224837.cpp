// Last updated: 5/3/2026, 10:48:37 PM
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4        int sum1 = 0;
5        int sum2 = 0;
6
7        for (int i = 1; i <= n; i++) {
8            if(i%m==0){
9                sum2+=i;
10            }
11            else sum1+=i;
12        }
13        return sum1-sum2;
14    }
15};