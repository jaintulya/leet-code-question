// Last updated: 5/3/2026, 10:37:01 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;

        for(int i=0 ; i<words.size();i++){

            for(char ch :words[i]){
                if(ch==x){
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};