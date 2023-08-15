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
class bstitr
{
  stack<TreeNode*>s;
  bool reverse=true;

public:
    bstitr(TreeNode* root, bool rev)
    {
        reverse=rev;
        pushall(root);
    }
    
    int next()
    {
        auto* x=s.top();
        s.pop();
        if(reverse) pushall(x->left);
        else pushall(x->right);
        return x->val;
    }
    
    void pushall(TreeNode* root)
    {
        while(root!=NULL)
        {
            s.push(root);
            if(reverse) root=root->right;
            else root=root->left;
        }
    }
    
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
     bstitr l(root , false);
     bstitr r(root , true);
    int i=l.next();
    int j=r.next();
    while(i<j)
    {
        if(i+j==k) return 1;
        if(i+j<k) i=l.next();
        else j=r.next();
    }
        return 0;
    }
};