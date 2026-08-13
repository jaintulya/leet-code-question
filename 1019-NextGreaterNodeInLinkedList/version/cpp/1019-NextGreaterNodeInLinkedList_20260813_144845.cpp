// Last updated: 8/13/2026, 2:48:45 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    vector<int> nextLargerNodes(ListNode* head) {
14        vector<int> ans;
15        vector<int> values;
16
17        ListNode* temp = head;
18
19        while (temp) {
20            values.push_back(temp->val);
21            temp = temp->next;
22        }
23
24        for (int i = 0; i < values.size(); i++) {
25
26            int greater = 0;
27
28            for (int j = i + 1; j < values.size(); j++) {
29
30                if (values[j] > values[i]) {
31                    greater = values[j];
32                    break;
33                }
34            }
35
36            ans.push_back(greater);
37        }
38
39        return ans;
40    }
41};