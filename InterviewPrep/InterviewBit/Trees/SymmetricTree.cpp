
 
 int Helper(TreeNode* leftSubTree, TreeNode* rightSubTree)
 {
     // Main idea is that it is an inverted tree
     // leftSub.left = rightSub.right
     // leftSub.right = rightSub.left 
     
     // Both null means they are maintinig symmetry
     if(leftSubTree == NULL && rightSubTree == NULL)
        return 1;
     else if(leftSubTree && rightSubTree && leftSubTree->val == rightSubTree->val)
     {
         
         int a =  Helper(leftSubTree->left, rightSubTree->right);
         int b = Helper(leftSubTree->right, rightSubTree->left);
         return a & b;
     }
     else // either of them is NULL hence not an inverted tree 
     {
         return 0;
     }
 }
 
 
int Solution::isSymmetric(TreeNode* A) {
    // We need to compare both the left and the right nodes.
    // Hence, need to make a helper function.
    if(A == NULL)return 1;
    else return Helper(A->left, A->right);
}




// Editorial Solution 
class Solution {
    public:
        bool isSymmetricHelper(TreeNode *leftTree, TreeNode *rightTree) {
            if (leftTree == NULL || rightTree == NULL) return leftTree == rightTree;
            if (leftTree->val != rightTree->val) return false;
            return isSymmetricHelper(leftTree->left, rightTree->right) && isSymmetricHelper(leftTree->right, rightTree->left);
        }
        bool isSymmetric(TreeNode *root) {
            return root == NULL || isSymmetricHelper(root->left, root->right);
        }
};



