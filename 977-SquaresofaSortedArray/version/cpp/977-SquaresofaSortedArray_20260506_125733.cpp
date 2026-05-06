// Last updated: 5/6/2026, 12:57:33 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        
5        int left = 0;
6        int right = nums.size() - 1;
7
8        vector<int> ans(nums.size());
9
10        int index = nums.size() - 1;
11
12        while(left <= right){
13
14            int leftSquare = nums[left] * nums[left];
15            int rightSquare = nums[right] * nums[right];
16
17            if(leftSquare > rightSquare){
18                ans[index] = leftSquare;
19                left++;
20            }
21            else{
22                ans[index] = rightSquare;
23                right--;
24            }
25
26            index--;
27        }
28
29        return ans;
30    }
31};