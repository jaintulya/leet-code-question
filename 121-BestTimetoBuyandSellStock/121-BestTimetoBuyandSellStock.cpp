// Last updated: 4/30/2026, 10:57:20 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice= INT_MAX;
5        int maxProfit=0;
6        for(int prices:prices){
7minPrice= min(prices,minPrice);
8maxProfit=max(maxProfit,prices-minPrice);
9        }
10         return maxProfit;
11    }
12   
13};