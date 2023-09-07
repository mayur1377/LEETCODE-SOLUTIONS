class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
if(head->next==NULL) return head;
vector<int>ans;
auto x=head;
int count=1;
while(x and count<left)
   {
    count++;
    x=x->next;
   }
auto l=x;
while(x and count<=right)
{
    count++;
    ans.push_back(x->val);
    x=x->next;
}
reverse(ans.begin() , ans.end());
int y=0;
while(y!=ans.size())
{
    l->val=ans[y];
    y++;
    l=l->next;
}
        return head;
    }
};