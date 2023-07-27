/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

auto *slow=head , *fast=head;
while(fast and fast->next)
{
    slow=slow->next;
    fast=fast->next->next;
        if(fast==slow) return 1;    
}
        return 0;
    }
};