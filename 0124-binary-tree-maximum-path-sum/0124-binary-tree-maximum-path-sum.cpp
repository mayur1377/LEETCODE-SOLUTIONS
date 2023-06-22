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
int ans=0;
int help(TreeNode* root)
{
    if(root==NULL) return 0;
    int leftmax=help(root->left);
    int rightmax=help(root->right);
    leftmax=max(leftmax , 0);
    rightmax=max(rightmax , 0);
    ans=max(ans , root->val+leftmax+rightmax );
    return root->val+max(leftmax , rightmax);
}
    int maxPathSum(TreeNode* root) {
ans=root->val;
help(root);
return ans;
    }
};