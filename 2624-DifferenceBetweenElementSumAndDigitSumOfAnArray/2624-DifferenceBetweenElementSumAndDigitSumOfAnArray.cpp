// Last updated: 5/3/2026, 10:37:13 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum = 0;
        int digitsum = 0;

        for (int a : nums) {

            elementsum += a;

            int temp = a;

            while (temp > 0) {

                digitsum += temp % 10;

                temp = temp / 10;
            }
        }

        return elementsum-digitsum;
    }
};