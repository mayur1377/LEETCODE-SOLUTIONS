class Solution {
public:
map<int , int>m;
TreeNode* help(vector<int>postorder , int poststart , int postend , vector<int>inorder , int instart , int inend)
{
    if(poststart>postend or instart>inend) return NULL;
    TreeNode* root=new TreeNode(postorder[postend]);
    int i=m[postorder[postend]];
    int left=i-instart;   
    root->left=help(postorder , poststart ,poststart+left-1, inorder , instart , i-1 );
    root->right=help(postorder , poststart+left,postend-1 , inorder ,i+1,inend);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
for(int i=0 ; i<inorder.size() ; i++) m[inorder[i]]=i;
TreeNode* root=help(postorder , 0 , postorder.size()-1 , inorder , 0 , inorder.size()-1);
return root;
    }
};