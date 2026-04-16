// Last updated: 4/16/2026, 8:25:28 PM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int> mp;
        for(int i=0; i<s.size() ; i++){
            mp[s[i]]++;
        }
        for(int j=0; j<s.size() ; j++){
            if(mp[s[j]]==1){
                return j;
            }
        }
    return -1;
    }
};