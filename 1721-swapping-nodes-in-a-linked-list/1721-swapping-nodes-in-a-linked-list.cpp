class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
vector<int>a;
auto ans=head , x=head;
while(head)
{
   a.push_back(head->val);
    head=head->next;
}
swap(a[k-1] , a[a.size()-k]);
int i=0;
while(ans)
{
   ans->val=a[i++];
   ans=ans->next;
}      
        return x;
    }
};