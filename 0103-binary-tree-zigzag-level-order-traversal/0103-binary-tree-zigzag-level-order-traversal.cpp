class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
vector<vector<int>>f;
if(root==NULL) return f;
queue<TreeNode*>s;
s.push(root);
bool level=0;
vector<int>ans;
while(s.size())
{
    int n=s.size();
    for(int i=0 ; i<n ; i++)
    {
      auto current=s.front();
      s.pop();
      ans.push_back(current->val);
      if(current->left) s.push(current->left);
      if(current->right) s.push(current->right);
    }
if(level)
{
    reverse(ans.begin() , ans.end());
}
level=!level;
f.push_back(ans);
ans.clear();
}
        return f;
    }
};