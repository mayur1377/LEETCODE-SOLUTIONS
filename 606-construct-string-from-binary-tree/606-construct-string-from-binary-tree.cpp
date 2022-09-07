class Solution {
public:
string help(TreeNode* root)
{
    if(root==NULL) return "";
    else if(root->left==NULL and root->right==NULL) return to_string(root->val); 
    else if(root->left and root->right) return to_string(root->val)+"("+help(root->left)+")"+"("+help(root->right)+")";
    else if(root->left and root->right==NULL) return to_string(root->val)+"("+help(root->left)+")";
    else return to_string(root->val)+"()"+"("+help(root->right)+")";
}
    string tree2str(TreeNode* root) {
return help(root);
    }
};