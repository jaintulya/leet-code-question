// Last updated: 5/22/2026, 5:55:23 PM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int count=0;
5
6        while(num>0){
7            if(num%2==0){
8                num=num/2;
9                count++;
10            }
11            else {
12                num=num-1;
13                count++;
14            }
15        }
16        return count;
17    }
18};