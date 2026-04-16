// Last updated: 4/16/2026, 8:25:34 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int value : nums) {
            mp[value]++;
        }

        int freq = nums.size() / 2;

        
        for (auto& it : mp) {
            if (it.second > freq) {
                return it.first;
            }
        }

        return -1;
    }
};