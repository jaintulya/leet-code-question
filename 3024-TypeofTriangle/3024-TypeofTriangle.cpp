// Last updated: 4/30/2026, 2:59:55 PM
1class Solution {
2public:
3    string triangleType(vector<int>& nums) {
4        int a = nums[0], b = nums[1], c = nums[2];
5
6     
7        if (a + b <= c || b + c <= a || c + a <= b) {
8            return "none";
9        }
10
11      
12        if (a == b && b == c) return "equilateral";
13
14        if (a == b || b == c || a == c) return "isosceles";
15
16        return "scalene";
17    }
18};