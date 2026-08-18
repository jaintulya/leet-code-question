// Last updated: 8/18/2026, 4:53:40 PM
1class Solution {
2public:
3    string trafficSignal(int timer) {
4        if (timer == 0) {
5            return "Green";
6        }
7        else if (timer == 30) {
8            return "Orange";
9        }
10        else if (timer > 30 && timer <= 90) {
11            return "Red";
12        }
13        else {
14            return "Invalid";
15        }
16    }
17};