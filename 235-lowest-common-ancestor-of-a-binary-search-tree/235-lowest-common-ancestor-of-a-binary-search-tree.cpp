/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
TreeNode* current=root;
while(current)
{
    if(current->val>p->val and current->val>q->val)
    {
        current=current->left;
    }
    else if(current->val<p->val and current->val<q->val)
    {
        current=current->right;
    }
    else return current;
}
        return current;
    }
};