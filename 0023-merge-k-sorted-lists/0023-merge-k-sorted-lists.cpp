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
ListNode* help(ListNode* x , ListNode*y)
{
    if(x==NULL) return y;
    if(y==NULL) return x;
    if(x->val<y->val)
    {
         x->next=help(x->next , y);
        return x;
    }
    else 
    {
         y->next=help(x , y->next);
        return y;
    }
}
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
if(lists.size()==0) return NULL;
while(lists.size()>1)
{
    auto x=lists[0];
    auto y=lists[1];
    ListNode* temp=help(x , y);
    lists.push_back(temp);
    lists.erase(lists.begin());
    lists.erase(lists.begin());
}
        return lists.front();
    }
};