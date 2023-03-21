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
vector<vector<int>>ans;
void help(TreeNode* root , int i)
{
    if(i==ans.size()) ans.push_back({});
    ans[i].push_back(root->val);
    if(root->left) help(root->left , i+1);
    if(root->right) help(root->right , i+1);
}
    vector<vector<int>> levelOrder(TreeNode* root) {
if(root==NULL) return ans;
help(root , 0);
return ans;
    }
};