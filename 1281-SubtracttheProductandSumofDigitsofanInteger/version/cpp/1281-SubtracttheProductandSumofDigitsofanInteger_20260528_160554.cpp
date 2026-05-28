// Last updated: 5/28/2026, 4:05:54 PM
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int sum=0;
5        int product=1;
6        while(n>0){
7
8            sum+=n%10;
9            product*=n%10;
10
11            n/=10;
12
13        }
14        return product-sum;
15
16    }
17};