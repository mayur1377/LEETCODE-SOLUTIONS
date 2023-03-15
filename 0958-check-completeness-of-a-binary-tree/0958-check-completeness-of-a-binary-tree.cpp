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
    bool isCompleteTree(TreeNode* root) {
if(root==NULL) return 1;
queue<TreeNode*>q;
q.push(root);
int flag=0;
while(q.size())
{
    auto current=q.front();
    q.pop();
    if(current==NULL) flag=1;
    else
    {
        if(flag==1) return 0;
        q.push(current->left);
        q.push(current->right);
    }
}
        return 1;
// int i=0;
// int x=1;
// while(i!=ans.size()-1)
// {
//     int n=ans.size();
    
// }
    }
};