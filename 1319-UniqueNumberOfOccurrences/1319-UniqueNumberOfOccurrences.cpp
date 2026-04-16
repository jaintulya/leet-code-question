// Last updated: 4/16/2026, 8:25:27 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;


        for (int value : arr) {
            freq[value]++;
        }

        unordered_set<int> count;

    
        for (auto& it : freq) {
            if (count.find(it.second) != count.end()) {
                return false; 
            }
            count.insert(it.second);
        }

        return true;
    }
};