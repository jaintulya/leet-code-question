// Last updated: 5/28/2026, 4:21:30 PM
1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4        if (arr.size() < 3) {
5            return false;
6        }
7
8        for (int i = 0; i <= arr.size() - 3; i++)
9
10            if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) {
11                return true;
12            }
13        return false;
14    }
15};