// Last updated: 5/20/2026, 11:35:58 AM
1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4
5        int total = 0;
6
7        for(int i = 0; i < arr.size(); i++) {
8
9            int sum = 0;
10
11            for(int j = i; j < arr.size(); j++) {
12
13                sum += arr[j];
14
15                int length = j - i + 1;
16
17                if(length % 2 != 0) {
18
19                    total += sum;
20                }
21            }
22        }
23
24        return total;
25    }
26};