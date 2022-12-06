class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
 if(head==NULL )return head;
if(head->next==NULL or head->next->next==NULL) return head;
ListNode* odd=head , *even=head->next;
ListNode*temp=head->next;
while(even and even->next)
{
   odd->next=even->next;
   even->next=even->next->next;
   odd=odd->next;
   even=even->next;
}
odd->next=temp;
return head;
    }
};