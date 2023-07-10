class Solution {
public:
    int minDepth(TreeNode* root) {
queue<TreeNode*>q;
if(root==NULL) return 0;
int level=0;
q.push(root);
while(q.size())
{
    int n=q.size();
    level++;
    while(n--)
    {
        auto current=q.front();
        q.pop();
        if(current->left) q.push(current->left);
        if(current->right)q.push(current->right);
        if(current->left==NULL and current->right==NULL) return level;
    }
}
        return 0;
    }
};