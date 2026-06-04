// Last updated: 6/4/2026, 11:04:56 AM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4
5        vector<int> freq(10, 0);
6
7        while (n > 0) {
8            freq[n % 10]++;
9            n /= 10;
10        }
11
12        int score = 0;
13
14        for (int digit = 0; digit <= 9; digit++) {
15            score += digit * freq[digit];
16        }
17
18        return score;
19    }
20};