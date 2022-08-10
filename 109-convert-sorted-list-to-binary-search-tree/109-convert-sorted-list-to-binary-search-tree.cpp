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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* help(vector<int>nums , int start , int end)
{
    if(start>=end) return NULL;
    int mid=start+end;
    mid/=2;
    TreeNode* x=new TreeNode(nums[mid]);
    x->left=help(nums , start , mid);
    x->right=help(nums , mid+1 , end);
    return x;
}
    TreeNode* sortedListToBST(ListNode* head) {
vector<int>nums;
if(head==NULL) return NULL;
while(head!=NULL)
{
    nums.push_back(head->val);
    head=head->next;
}
for(auto i : nums) cout<<i<<" ";
return help(nums , 0 , nums.size());
    }
};