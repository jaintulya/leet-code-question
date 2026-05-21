// Last updated: 5/21/2026, 10:28:43 PM
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        vector<int>freq(nums.size()+1,0);
5        vector<int> ans;
6
7        for(int i=0 ; i<nums.size();i++){
8            freq[nums[i]]++;
9        }
10
11        for(int i=1 ; i<=nums.size();i++){
12            if(freq[i]>1) ans.push_back(i);
13        }
14        return ans;
15    } 
16};