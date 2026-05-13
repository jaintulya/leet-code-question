// Last updated: 5/13/2026, 4:14:37 PM
1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4
5        if(arr.size() < 3){
6            return false;
7        }
8
9        for(int i = 0; i <= arr.size() - 3; i++){
10
11            if(arr[i] % 2 != 0 &&
12               arr[i + 1] % 2 != 0 &&
13               arr[i + 2] % 2 != 0){
14
15                return true;
16            }
17        }
18
19        return false;
20    }
21};