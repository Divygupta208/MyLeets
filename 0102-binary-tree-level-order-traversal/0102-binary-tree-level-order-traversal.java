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
        
        
        List<List<Integer>> list = new ArrayList();
        if(root == null){
            return list ;
        }
        
        
        
        Queue<TreeNode> q = new LinkedList<TreeNode>();
        
        q.add(root);
        
        while(q.isEmpty()== false){
            
            int size = q.size();
            List<Integer> currlevel = new ArrayList();
           
            
            while(size-->0){
            TreeNode curr = new TreeNode();
            curr = q.poll();
                currlevel.add(curr.val);
                
            if(curr.left != null){
               q.offer(curr.left);
            }
            if(curr.right != null){
                q.offer(curr.right);
            }
                
            }
           list.add(currlevel);
        }
         return list;
    }
}