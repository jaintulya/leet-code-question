// Last updated: 4/16/2026, 8:25:36 PM
class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        string word = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    store.push_back(word);
                    word = "";
                }
            }
        }


        if (!word.empty()) {
            store.push_back(word);
            word="";
        }

            reverse(store.begin(), store.end());

        
        for (int i = 0; i < store.size(); i++) {
            word += store[i];
            if (i != store.size() - 1) {
                word += " ";
            }
        }

        return word;
    }
};