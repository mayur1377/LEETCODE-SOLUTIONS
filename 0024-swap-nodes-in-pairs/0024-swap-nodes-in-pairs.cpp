class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
if(head==NULL) return head;
auto ans=head;
while(head and head->next)
{
    swap(head->val , head->next->val);
    head=head->next->next;
}
        return ans;
    }
};