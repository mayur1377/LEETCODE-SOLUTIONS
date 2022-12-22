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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
int carry=0;
ListNode* ans=new ListNode();
auto *x=ans;
while(l1 or l2 or carry)
{
    if(l1)
    {
        carry+=l1->val;
        l1=l1->next;
    }
    if(l2)
    {
        carry+=l2->val;
        l2=l2->next;
    }
    ans->next=new ListNode(carry%10);
    ans=ans->next;
    carry/=10;
}
return x->next;
    }
};