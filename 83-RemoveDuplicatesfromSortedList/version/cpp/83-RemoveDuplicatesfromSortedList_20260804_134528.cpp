// Last updated: 8/4/2026, 1:45:28 PM
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
13    ListNode* deleteDuplicates(ListNode* head) {
14
15        if(head==NULL) {
16            return head;
17        }
18
19        ListNode *temp = head->next;
20        ListNode *prev = head;
21        while(temp != NULL) {
22            if(temp-> val==prev->val) {
23                ListNode *rem = temp;
24                prev->next=temp->next;
25                 temp = prev->next;
26                 delete rem;
27                
28            }
29
30            else {
31                prev = temp;
32                temp = temp->next;
33            }
34        }
35        return head;
36    }
37};