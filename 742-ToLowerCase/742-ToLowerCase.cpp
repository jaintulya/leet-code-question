// Last updated: 5/3/2026, 10:37:27 PM
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0;i<s.size();i++){
           s[i] =  tolower(s[i]);
        }
        return s;
    }
};