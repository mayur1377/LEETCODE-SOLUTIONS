class Solution {
public:
int x=0;
void add(TreeNode* root , int sum)
{
    if(root==NULL) return;
    if(root->left==NULL and root->right==NULL)
    {
        sum=sum*10 + (root->val);
        x+=sum;
        return;
    }
add(root->left ,  sum*10+root->val);
add(root->right , sum*10+root->val);
    
}
    int sumNumbers(TreeNode* root) {
add(root , 0);
return x;
    }
};