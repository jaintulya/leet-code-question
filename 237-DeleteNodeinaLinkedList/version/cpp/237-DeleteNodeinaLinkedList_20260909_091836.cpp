// Last updated: 9/9/2026, 9:18:36 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* n1) {
12        ListNode* temp= n1->next;
13        n1->val=temp->val;
14        n1->next=temp->next;
15        temp->next=NULL;
16    }
17};