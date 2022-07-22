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
//the worst solution 
vector<int>less , more;
ListNode* temp=head;
while(temp)
{
    if(temp->val<x) less.push_back(temp->val);
    else more.push_back(temp->val);
    temp=temp->next;
}
int n=less.size();
temp=head;
int i=0;
while(n-- and temp)
{
    temp->val=less[i++];
    temp=temp->next;
}
i=0;
n=more.size();
while(n-- and temp)
{
    temp->val=more[i++];
    temp=temp->next;
}
        return head;
    }
};