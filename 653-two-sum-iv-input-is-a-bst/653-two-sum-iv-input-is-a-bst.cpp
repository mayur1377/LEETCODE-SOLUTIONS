class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
if(root==NULL) return 0;
if(root->val<=k and !root->left and !root->right ) return 0;
vector<int>ans;
stack<TreeNode*>s;
s.push(root);
while(!s.empty())
{
    auto current=s.top();
    s.pop();
    ans.push_back(current->val);
    if(current->left) s.push(current->left);
    if(current->right) s.push(current->right);
}
  for(int i=0 ; i<ans.size() ; i++)
  {
      for(int j =0 ; j<ans.size() ; j++)
      {
          if(ans[i]+ans[j]==k and i!=j) return 1;
      }
  }
        return 0;
    }
};