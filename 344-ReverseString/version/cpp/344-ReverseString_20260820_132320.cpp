// Last updated: 8/20/2026, 1:23:20 PM
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int right=s.size()-1;
5        int left=0;
6while(left<right){
7swap(s[left],s[right]);
8right--;
9left++;
10}
11    }
12};