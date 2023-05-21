/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>>ans=new LinkedList<List<Integer>>();
        Queue<TreeNode>q=new LinkedList<TreeNode>();
        
        if(root==null) return ans;
        q.offer(root);
        while(q.size()!=0)
        {
            int n=q.size();
            List<Integer>temp=new ArrayList<>();
            for(int i=0 ; i<n ; i++)
            {
                TreeNode curr=q.peek();
                q.poll();
                if(curr.left!=null) q.offer(curr.left);
                if(curr.right!=null) q.offer(curr.right);
                temp.add(curr.val);
            }
            ans.add(temp);
        }
        return ans;
    }
}