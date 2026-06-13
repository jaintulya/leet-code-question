// Last updated: 6/13/2026, 1:11:13 PM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> ans;
5
6        for(int i=0;i<nums.size();i++){
7
8            int count =0;
9
10            for(int j=0;j<nums.size();j++){
11                if(nums[j]<nums[i]) count++;
12            }
13
14            ans.push_back(count);
15        }
16
17        return ans;
18    }
19};