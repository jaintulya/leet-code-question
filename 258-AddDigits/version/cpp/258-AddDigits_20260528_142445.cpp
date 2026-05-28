// Last updated: 5/28/2026, 2:24:45 PM
1class Solution {
2public:
3    int addDigits(int num) {
4      while(num>=10){ //num=2
5
6        int sum=0; //sum=0
7
8        while(num>0){
9            sum+=num%10; //sum=1+1
10            num=num/10; //num==1,0
11        }
12        num=sum;
13      }
14      return num;
15    }
16};