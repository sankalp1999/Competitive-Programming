


/* Keep track of sum
Check when reached leaf node
*/


int inorder(TreeNode* head, int k, int sum)
{
   // When reach leaf nodes, check sum.     
   if(head != NULL && head->left == NULL && head->right == NULL)
   {
        // here, one needs to additionally add and check the sum.
        if(k == sum + head->val)return 1;
        else return 0;
   }
   if(head)
   {
       // dfs keep adding root sum
       return inorder(head->left, k, sum + head->val) | inorder(head->right, k , sum + head->val);
   }
   return 0;
}
 
int Solution::hasPathSum(TreeNode* head, int k) {
    
    return inorder(head, k, 0);
    
}


/* Editorial Solution much more concise than my solution */
class Solution {
    public:
        bool hasPathSum(TreeNode *root, int sum) {
            if (root == NULL) return false;
            if (root->left == NULL && root->right == NULL) {
                return sum == root->val;
            }
            int remainingSum = sum - root->val;
            return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
        }
};


