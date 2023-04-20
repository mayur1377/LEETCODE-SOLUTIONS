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
    int widthOfBinaryTree(TreeNode* root) {
long long maxwidth=INT_MIN;
queue<pair<TreeNode* ,long long >>q;
q.push({root , 0});
while(q.size())
{
    long long n=q.size();
    long long left=0;
    long long right=0;
    long long int mini=q.front().second;
    for(int i=0 ; i<n ; i++)
    {
        auto current=q.front();
        q.pop();
        TreeNode* x=current.first;
        long long  w=current.second-mini;
        if(i==0) left=w;
        if(i==n-1) right=w;
        if(x->left) q.push({x->left , 2*w+1});
        if(x->right) q.push({x->right , 2*w+2});
    }
    maxwidth=max(maxwidth, right-left);
}
return maxwidth+1;
    }
};