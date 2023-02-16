class Solution {
public:
    int maxDepth(TreeNode* root) {
if(root==NULL) return 0;
return max(maxDepth(root->right) , maxDepth(root->left)) +1;
    }
};