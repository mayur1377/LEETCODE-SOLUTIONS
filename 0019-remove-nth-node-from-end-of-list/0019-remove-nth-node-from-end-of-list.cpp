/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
auto slow=head , fast=head;
while(n-- and fast) fast=fast->next;
if(fast==NULL) 
{
    head=head->next;
    return head;
}
while(fast and fast->next)
{
    fast=fast->next;
    slow=slow->next;
}
slow->next=slow->next->next;
return head;
    }
};