class Solution {
public:
map<int, int>m;
TreeNode* help(vector<int>preorder , int prestart , int preend , vector<int>inorder , int instart ,int inend )
{
    if(instart>inend or prestart>preend) return NULL;
    TreeNode * root=new TreeNode(preorder[prestart]);
    int i=m[preorder[prestart]];
    root->left=help(preorder , prestart+1 , prestart+i-instart , inorder , instart , i-1 );
    root->right=help(preorder , prestart+i-instart+1 , preend , inorder , i+1,inend );
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
for(int i=0 ; i<inorder.size() ; i++) m[inorder[i]]=i;
TreeNode* root=help(preorder , 0 , preorder.size()-1 , inorder , 0, inorder.size()-1);
return root;
    }
};