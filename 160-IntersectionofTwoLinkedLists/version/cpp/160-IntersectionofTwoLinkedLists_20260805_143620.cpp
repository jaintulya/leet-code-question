// Last updated: 8/5/2026, 2:36:20 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9
10class Solution {
11public:
12    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
13
14        ListNode *p1 = headA;
15        ListNode *p2 = headB;
16
17        while (p1 != p2) {
18
19            if (p1 == nullptr)
20                p1 = headB;
21            else
22                p1 = p1->next;
23
24            if (p2 == nullptr)
25                p2 = headA;
26            else
27                p2 = p2->next;
28        }
29
30        return p1;
31    }
32};