// Last updated: 5/1/2026, 6:38:59 PM
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> index;
5
6        for(int i=0 ; i<words.size();i++){
7
8            for(char ch :words[i]){
9                if(ch==x){
10                    index.push_back(i);
11                    break;
12                }
13            }
14        }
15        return index;
16    }
17};