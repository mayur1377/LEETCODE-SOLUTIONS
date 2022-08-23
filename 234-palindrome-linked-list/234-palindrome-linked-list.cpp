class Solution {
public:
ListNode* reverse(ListNode* head)
{
    ListNode* prev=NULL , *next=NULL;
    while(head)
    {
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
void show(ListNode* head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
    bool isPalindrome(ListNode* head) {
ListNode* slow=head , *fast=head;
while(fast->next and fast->next->next)
{
    slow=slow->next;
    fast=fast->next->next;
}
fast=slow->next;  
slow->next=NULL;
fast=reverse(fast);
while(fast and head->val==fast->val)
{
    head=head->next;
    fast=fast->next;
}
if(fast) return 0;
return 1;
    }
    
};