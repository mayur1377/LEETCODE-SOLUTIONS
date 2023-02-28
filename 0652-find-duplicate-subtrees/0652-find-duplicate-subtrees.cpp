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
string s="";
string help(unordered_map<string , int>& m , TreeNode* root , vector<TreeNode*>&ans)
{
    if(root==NULL) return "*";
    string x=help(m , root->left , ans);
    string y=help(m , root->right , ans);
    string full=x+" + "+y+" + "+to_string(root->val);
    if(m[full]==1) ans.push_back(root);
    m[full]++;
    return full;
}
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string , int >m;
        vector<TreeNode*>ans;
        help(m , root , ans);
        for(auto i : m)
        {
            cout<<i.first<<endl;
        }
        return ans;
        
    }
};