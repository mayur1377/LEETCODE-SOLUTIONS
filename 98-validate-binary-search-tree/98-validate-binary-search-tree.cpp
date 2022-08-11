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
int help(TreeNode* root , long right , long left)
{
    if(root==NULL) return 1;
    if(root->val>=right or root->val<=left) return 0;
    return help(root->left , root->val , left) and help(root->right ,right , root->val );
}
    bool isValidBST(TreeNode* root) {
return help(root , LONG_MAX , LONG_MIN);
    }
};