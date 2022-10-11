class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
int count=0;
auto temp=head;
while(temp)
{
    count++;
    temp=temp->next;
}
count++;
count-=n;
temp=head;
if(count==1) 
{
    head=head->next;
    return head;
}
while(count-->2 and temp)
{
    temp=temp->next;
}
// if(temp==NULL) return NULL;
temp->next=temp->next->next;
return head;
    }
};