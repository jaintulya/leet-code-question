// Last updated: 8/4/2026, 2:23:45 PM
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
11    void deleteNode(ListNode* node) {
12        ListNode* temp=node->next;
13        node->val=temp->val;
14        node->next=temp->next;
15        delete temp;
16    }
17};