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