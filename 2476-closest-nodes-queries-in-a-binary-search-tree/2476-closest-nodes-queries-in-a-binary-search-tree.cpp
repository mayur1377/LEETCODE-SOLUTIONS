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
void help(TreeNode* root , vector<int>&nums)
{
   if(root==NULL) return ;
    if(root->left) help(root->left , nums);
    nums.push_back(root->val);
    if(root->right) help(root->right ,nums);
}
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
vector<int>nums;
help(root, nums);
vector<vector<int>>ans;
for(auto i : queries)
{
    vector<int>temp;
    int ind=lower_bound(nums.begin() , nums.end() , i)-nums.begin();
    if(ind==nums.size()) temp.push_back(-1);
    else temp.push_back(nums[ind]);
    
    if(ind<nums.size() and nums[ind]==i) temp.push_back(nums[ind]);
    else if(ind==0) temp.push_back(-1);
    else temp.push_back(nums[--ind]);
    reverse(temp.begin() , temp.end());
    ans.push_back(temp);
}
return ans;
    }
};