// Last updated: 6/7/2026, 6:25:21 PM
1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4
5        int count = 0;
6
7        for(int num : nums) {
8
9            if(num % 3 != 0) {
10                count++;
11            }
12        }
13
14        return count;
15    }
16};