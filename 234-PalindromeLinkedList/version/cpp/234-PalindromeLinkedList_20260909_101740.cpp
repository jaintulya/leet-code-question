// Last updated: 9/9/2026, 10:17:40 AM
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
13    bool isPalindrome(ListNode* head) {
14        ListNode* address = NULL;
15        ListNode* i = head;
16        while (i != NULL) {
17            ListNode* newNode = new ListNode();
18            newNode->next = address;
19            address = newNode;
20            newNode->val = i->val;
21            i = i->next;
22        }
23        i = head;
24        ListNode* j = address;
25        while (i != NULL) {
26            if (i->val != j->val) {
27                return false;
28            }
29            i = i->next;
30            j = j->next;
31        }
32        return true;
33    }
34};