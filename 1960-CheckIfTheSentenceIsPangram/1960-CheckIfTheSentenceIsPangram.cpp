// Last updated: 5/3/2026, 10:37:17 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> check(26, false);
        for (char ch : sentence) {

            check[ch - 'a'] = true;
            // b=98 a=97 98-97=1
            //  o=111 a=97 o-a -> 111-97=14
        }

        for (bool var : check) {
            if (!var)
                return false;
        }
        return true;
    }
};