class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
 if(depth==1) //depth is one done
 {
     TreeNode *temp = new TreeNode(val);
     temp->left=root;
     return temp;
 }
int level=1;
queue<TreeNode*>s;
s.push(root);
auto head=root;
while(s.size())
{
    int n=s.size();
    vector<int>ans;
    level++;
    if(level==depth)
    {
        while(n--)
        { 
        auto current=s.front();
        s.pop();
        if(current->left)
        {
            TreeNode *temp = new TreeNode(val);
            temp->left=current->left;
            current->left=temp;
        }
        if(current->right) 
        {
            TreeNode *temp = new TreeNode(val);
            temp->right=current->right;
            current->right=temp;
        }
        if(current->right==NULL)
        {
            TreeNode *temp = new TreeNode(val);
            current->right=temp;
        }
        if(current->left==NULL)
        {
            TreeNode *temp = new TreeNode(val);
            current->left=temp;
        }
        }
        cout<<"here";
       return head; 
    }
    while(n--)
    {
        auto current=s.front();
        s.pop();
        if(current->left) s.push(current->left);
        if(current->right) s.push(current->right);
    }
}
return head;
    }
};