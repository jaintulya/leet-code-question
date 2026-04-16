// Last updated: 4/16/2026, 8:25:33 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                ++j;
            }
        }
    }
};