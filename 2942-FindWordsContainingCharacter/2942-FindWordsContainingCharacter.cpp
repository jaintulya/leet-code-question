// Last updated: 5/1/2026, 7:08:37 PM
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int count=0;
5        for(int i :hours){
6            if(i>=target) count++;
7        }
8        return count;
9    }
10};