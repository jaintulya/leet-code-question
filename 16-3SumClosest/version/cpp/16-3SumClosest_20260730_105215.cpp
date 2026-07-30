// Last updated: 7/30/2026, 10:52:15 AM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int high=nums.size()-1;
5        int low=0;
6        int mid=0;
7          while(mid<=high){
8            if(nums[mid]==0){
9                swap(nums[mid],nums[low]);
10                low++;
11                mid++;
12            }
13
14           else  if(nums[mid]==1){
15                mid++;
16            }
17
18          else if(nums[mid]==2){
19                swap(nums[mid],nums[high]);
20                high--;
21            }
22
23          }
24     
25    }
26};