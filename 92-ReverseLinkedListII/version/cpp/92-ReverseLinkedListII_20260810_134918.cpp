// Last updated: 8/10/2026, 1:49:18 PM
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14
15        if (left == right)
16            return head;
17
18        ListNode dummy(0);
19        dummy.next = head;
20
21        ListNode* prev = &dummy;
22
23        // left ke just pehle tak jao
24        for (int i = 1; i < left; i++) {
25            prev = prev->next;
26        }
27
28        ListNode* curr = prev->next;
29
30        // Reverse
31        for (int i = 0; i < right - left; i++) {
32            ListNode* temp = curr->next;
33
34            curr->next = temp->next;
35            temp->next = prev->next;
36            prev->next = temp;
37        }
38
39        return dummy.next;
40    }
41};