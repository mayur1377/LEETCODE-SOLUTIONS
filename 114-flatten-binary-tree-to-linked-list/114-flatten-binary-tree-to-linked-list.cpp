/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
if(root==NULL or (root->left==NULL and root->right==NULL)) return;
auto rt=root;
stack<TreeNode*>s;
s.push(root);
vector<int>temp;
while(s.size())
{
    auto current=s.top();
    s.pop();
    if(current->right) s.push(current->right);
    if(current->left) s.push(current->left);
    temp.push_back(current->val);
}
TreeNode* x=new TreeNode(temp[1]);
TreeNode* in=x;
for(int i=2 ; i<temp.size() ; i++)
{
    TreeNode* ok=new TreeNode(temp[i]);
    x->right=ok;
    x->left=NULL;
    x=ok;
}
        rt->left=NULL;
        rt->right=in;
    }
};