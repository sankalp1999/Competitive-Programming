
// This is like seeing in a mirror. Your head is at the same position
// but your hands are inversed!!!!!!
// Two policies required here
// a) leftSub.left = rightSub.right
// b) leftSub.right = rightSub.left

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL || (check(root->left, root->right)) )
        {
            return true;
        }
        else
            return false;
   
    }
    bool check(TreeNode* leftSub, TreeNode* rightSub)
    {
        if(leftSub == NULL && rightSub == NULL)
            return true;
        else if(leftSub != NULL && rightSub != NULL)
        {
            return (leftSub->val == rightSub->val) && check(leftSub->left, rightSub->right)
                && check(leftSub->right, rightSub->left);
        }
        
        return false; // when any one is null and other is not
    }
};
