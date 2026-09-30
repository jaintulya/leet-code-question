// Last updated: 9/30/2026, 10:47:53 AM
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