// Last updated: 5/3/2026, 10:37:11 PM
class Solution {
public:
    int countDigits(int num) {
        int n = num; //121
        int count = 0;
        while (n > 0) {
            int digit= n%10;  //1 //2 //1
            if(num%digit==0){  //121%1 
                count++; //count=2
            }
            n=n/10; //12 //1 //0
        }
        return count;
    }
};