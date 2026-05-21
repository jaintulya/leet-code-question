// Last updated: 5/21/2026, 10:35:31 PM
1class Solution {
2public:
3    vector<int> getSneakyNumbers(vector<int>& nums) {
4     
5
6        vector<int>freq(nums.size(),0);
7        vector<int> ans;
8
9        for(int i=0 ; i<nums.size();i++){
10            freq[nums[i]]++;
11        }
12
13        for(int i=0 ; i<nums.size();i++){
14            if(freq[i]>1) ans.push_back(i);
15        }
16        return ans;
17    } 
18};
19 