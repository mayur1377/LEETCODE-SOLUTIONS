class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
 ListNode* slow=head , *fast=head;
while(fast and n--) fast=fast->next;
if(fast==NULL) return head->next;
while(fast and fast->next)
{
    slow=slow->next;
    fast=fast->next;
}
slow->next=slow->next->next;
return head;
    }
};