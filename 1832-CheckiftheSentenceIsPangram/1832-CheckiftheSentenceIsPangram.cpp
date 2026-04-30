// Last updated: 4/30/2026, 1:02:26 PM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        return unordered_set<char>(sentence.begin(), sentence.end()).size() == 26;
5    }
6};