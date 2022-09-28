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
map<pair<TreeNode*,bool>,int>m;
int ans=0;
int help(TreeNode* root , int d)
{
    if(root==NULL) return 0;
    if(m.find({root,d})!=m.end()) return m[{root,d}]; 
    if(d==0)
    {
        return m[{root , d}]=1+help(root->right , 1);
    }
    else return m[{root , d}]=1+help(root->left , 0);
}
void t(TreeNode* root)
{
    if(root==NULL) return ;
    t(root->left);
    ans=max(ans , max(help(root , 1) , help(root , 0)));
    t(root->right);
}
    int longestZigZag(TreeNode* root) {
t(root);
return ans-1;
    }
};