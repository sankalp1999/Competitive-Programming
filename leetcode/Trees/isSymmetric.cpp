/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
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
