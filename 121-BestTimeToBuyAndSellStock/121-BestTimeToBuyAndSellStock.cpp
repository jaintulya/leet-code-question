// Last updated: 5/3/2026, 10:37:33 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice= INT_MAX;
        int maxProfit=0;
        for(int prices:prices){
minPrice= min(prices,minPrice);
maxProfit=max(maxProfit,prices-minPrice);
        }
         return maxProfit;
    }
   
};