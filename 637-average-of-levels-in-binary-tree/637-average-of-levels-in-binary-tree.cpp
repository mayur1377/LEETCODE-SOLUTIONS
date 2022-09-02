class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
vector<double>ans;
queue<TreeNode*>q;
q.push(root);
while(q.size())
{
    int n=q.size();
    double sum=0;
    for(int i=0 ; i<n ; i++)
    {
        TreeNode *current=q.front();
        q.pop();
        sum+=current->val;
        if(current->left) q.push(current->left);
        if(current->right)q.push(current->right);
    }
    sum/=n;
    ans.push_back(sum);
}      
return ans;
    }
};