// Last updated: 8/11/2026, 10:50:43 PM
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
13    ListNode* swapPairs(ListNode* head) {
14        if (head == NULL || head->next == NULL)
15            return head;
16
17        ListNode* first = head;
18        ListNode* second = head->next;
19
20        first->next = swapPairs(second->next);
21        second->next = first;
22
23        return second;
24    }
25};