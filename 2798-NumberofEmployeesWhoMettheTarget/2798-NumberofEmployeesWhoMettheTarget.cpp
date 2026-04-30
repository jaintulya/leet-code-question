// Last updated: 4/30/2026, 1:40:38 PM
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int count =0;
5        for(int a:hours){
6            if(a>=target) count++;
7        }
8        return count;
9    }
10};