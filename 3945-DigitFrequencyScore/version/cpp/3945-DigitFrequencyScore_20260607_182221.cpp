// Last updated: 6/7/2026, 6:22:21 PM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        vector<int> freq(10, 0);
5
6        while (n > 0) {
7            freq[n % 10]++;
8            n /= 10;
9        }
10
11        int score = 0;
12
13        for (int i = 0; i <= 9; i++) {
14            score += i * freq[i];
15        }
16        return score;
17    }
18};