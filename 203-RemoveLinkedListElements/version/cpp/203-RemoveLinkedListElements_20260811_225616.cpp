// Last updated: 8/11/2026, 10:56:16 PM
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
13    ListNode* removeElements(ListNode* head, int val) {
14        while (head != NULL && head->val == val) {
15            head = head->next;
16        }
17
18        ListNode* curr = head;
19
20        while (curr != NULL && curr->next != NULL) {
21            if (curr->next->val == val) {
22                curr->next = curr->next->next;
23            } else {
24                curr = curr->next;
25            }
26        }
27
28        return head;
29    }
30};