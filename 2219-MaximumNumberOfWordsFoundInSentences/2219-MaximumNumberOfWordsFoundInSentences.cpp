// Last updated: 5/3/2026, 10:37:15 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxword = 0;

        for (string s : sentences) {
            int count = 1;
            for (char ch : s) {
                if(ch== ' ') count++;
            }
            maxword= max(maxword,count);

        }
        return maxword;
    }
};