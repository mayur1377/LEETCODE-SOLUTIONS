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
    ListNode* partition(ListNode* head, int x) {
if(head==NULL) return head;
ListNode* less=new ListNode();
ListNode* more=new ListNode();
ListNode* ans=less;
ListNode* m=more;
while(head)
{
    int temp=head->val;
    ListNode* c=new ListNode(temp);
    if(temp<x)
    {
        less->next=c;
        less=less->next;
    }
    else
    {
        more->next=c;
        more=more->next;
    }
    head=head->next;
}
less->next=m->next;
return ans->next;
    }
};