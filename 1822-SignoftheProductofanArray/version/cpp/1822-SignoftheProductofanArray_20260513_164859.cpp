// Last updated: 5/13/2026, 4:48:59 PM
1class Solution {
2public:
3    int arraySign(vector<int>& nums) {
4
5        int sign = 1;
6
7        for(int i = 0; i < nums.size(); i++) {
8
9            if(nums[i] == 0) {
10                return 0;
11            }
12
13            if(nums[i] < 0) {
14                sign = -sign;
15            }
16        }
17
18        return sign;
19    }
20};