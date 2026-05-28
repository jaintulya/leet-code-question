// Last updated: 5/28/2026, 5:36:36 PM
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int single=0;
5        int doubledi=0;
6
7        for(int i=0 ; i<nums.size();i++){
8            if(nums[i]<10){
9                single+=nums[i];
10            }
11
12            else {
13                doubledi+=nums[i];
14
15            }
16        }
17        return single!=doubledi;
18    }
19};