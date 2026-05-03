// Last updated: 5/3/2026, 10:37:14 PM
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            int i = 0; //abc //ada //racecar
            int j = s.size()-1; //5

            while (i<j && s[i]==s[j]){
                i++; //3
                j--;//3
            }

            if(i>=j) return s;
        }

        return "";
    }
};