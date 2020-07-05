/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    /* The helper should be named height instead of depth since we are calculating the 
    height of the tree. By definition, height is calculated from the bottom of the tree.
    Now, while finding height recursively for each left and right subtree, if we 
    see that difference in heights is more than 1, then we return -1. 
    
    Only a single subtree on the left or right could be imbalanced, so we need to handle this case.
    So, if either of left or right is -1, return -1.
    
    */
    int depth(TreeNode* root)
    {
        
        if(root == NULL)return 0;
        
        int left = depth(root->left);
        int right =  depth(root->right);
        if(left == -1 || right == -1)return -1;
        if(abs(left - right) > 1)
        {
            return -1;
        }
        return max(left, right) + 1;
    }
    
    
    bool isBalanced(TreeNode* root) {
       
       return depth(root) != -1; // We needed a helper function.

        
    }
};
