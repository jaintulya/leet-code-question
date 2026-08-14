// Last updated: 8/14/2026, 12:01:22 PM
1class Solution {
2public:
3    int minimumPairRemoval(vector<int>& nums) {
4        int count = 0;
5
6        while (true) {
7            bool sorted = true;
8
9            for (int i = 0; i < nums.size() - 1; i++) {
10                if (nums[i] > nums[i + 1]) {
11                    sorted = false;
12                    break;
13                }
14            }
15
16            if (sorted)
17                return count;
18
19            int index = 0;
20            int minSum = nums[0] + nums[1];
21
22            for (int i = 1; i < nums.size() - 1; i++) {
23                int sum = nums[i] + nums[i + 1];
24
25                if (sum < minSum) {
26                    minSum = sum;
27                    index = i;
28                }
29            }
30
31            nums[index] = minSum;
32            nums.erase(nums.begin() + index + 1);
33
34            count++;
35        }
36    }
37};