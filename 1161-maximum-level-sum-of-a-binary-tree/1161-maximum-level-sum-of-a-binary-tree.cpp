class Solution {
public:
    int maxLevelSum(TreeNode* root) {
int temp=INT_MIN ,sum=0 , level=0  , x=0;
queue<TreeNode*>q;
int ans;
q.push(root);
while(q.size())
{
    x=0;
    level++;
    int n=q.size();
    while(n--)
    {
      auto current=q.front();
      q.pop();
      if(current->left) q.push(current->left);
      if(current->right) q.push(current->right);
      x+=current->val; 
    }
    if(temp<x)
    {
        temp=x;
        ans=level;
    }
}
        return ans;
    }
};