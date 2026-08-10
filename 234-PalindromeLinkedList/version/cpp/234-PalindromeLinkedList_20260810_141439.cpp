// Last updated: 8/10/2026, 2:14:39 PM
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
14
15        vector<int> arr;
16
17        while (head != NULL) {
18            arr.push_back(head->val);
19            head = head->next;
20        }
21
22        int i = 0;
23        int j = arr.size() - 1;
24
25        while (i < j) {
26            if (arr[i] != arr[j])
27                return false;
28
29            i++;
30            j--;
31        }
32
33        return true;
34    }
35};