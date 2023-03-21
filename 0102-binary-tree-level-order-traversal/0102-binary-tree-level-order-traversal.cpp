class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
vector<vector<int>>ans;
if(root==NULL) return ans;
queue<TreeNode*>q;
q.push(root);
while(q.size())
{
    int n=q.size();
    vector<int>temp;
    for(int i=0 ; i<n ; i++)
    {
        TreeNode* current=q.front();
        q.pop();
        if(current->left) q.push(current->left);
        if(current->right) q.push(current->right);
        temp.push_back(current->val);
    }
    ans.push_back(temp);
}
return ans;
    }
};