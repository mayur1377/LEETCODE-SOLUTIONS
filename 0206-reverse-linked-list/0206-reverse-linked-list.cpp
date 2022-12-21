class Solution {
public:
    ListNode* reverseList(ListNode* head) {
auto curr=head;
ListNode* prev=NULL , *next=NULL;
while(curr)
{
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
head=prev;
return head;
    }
};