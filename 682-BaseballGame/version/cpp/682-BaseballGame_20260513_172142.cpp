// Last updated: 5/13/2026, 5:21:42 PM
1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4
5        vector<int> score;
6
7        for(int i = 0; i < operations.size(); i++) {
8
9            if(operations[i] == "C") {
10
11                score.pop_back();
12            }
13
14            else if(operations[i] == "D") {
15
16                score.push_back(score.back() * 2);
17            }
18
19            else if(operations[i] == "+") {
20
21                int last = score.back();
22                int secondLast = score[score.size() - 2];
23
24                score.push_back(last + secondLast);
25            }
26
27            else {
28
29                score.push_back(stoi(operations[i]));
30            }
31        }
32
33        int sum = 0;
34
35        for(int x : score) {
36            sum += x;
37        }
38
39        return sum;
40    }
41};