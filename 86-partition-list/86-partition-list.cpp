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
ListNode *less=new ListNode(0) , *more=new ListNode(0);
ListNode* front=less , *back=more , *temp=head;
while(temp)
{
    if(temp->val<x) front->next=temp , front=temp;
    else back->next=temp , back=temp;
    temp=temp->next;
}
front->next=more->next;
back->next=NULL;
head=less->next;
return head;
    }
};