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
     bool helper(TreeNode* root, int& res, int sum)
    {
        if(root==NULL)return false;
        if(root->left == NULL && root->right == NULL && res + root-> val == sum)
            return true;
        res += root->val;
        if(helper(root->left, res, sum) || helper(root->right, res, sum))
            return true;  
        res -= root->val;
         return false;
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        int res = 0 ;
        if(root == NULL)return false;
        return helper(root, res, sum);
    }
};
