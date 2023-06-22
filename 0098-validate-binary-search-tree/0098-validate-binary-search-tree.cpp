class Solution {
public:
bool help(TreeNode* root , long maxi , long mini)
{
    if(root==NULL) return true;
    if(mini<root->val and root->val<maxi)
    {
        return help(root->left  , root->val , mini ) and help(root->right , maxi , root->val);
    }
    else return false;
}
    bool isValidBST(TreeNode* root) {
return help(root , LONG_MAX , LONG_MIN);
    }
};