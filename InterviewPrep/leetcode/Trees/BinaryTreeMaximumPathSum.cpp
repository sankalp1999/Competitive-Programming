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
    int helper(TreeNode* root, int& res)
    {
        if(root == NULL)return 0;// base case
        
        // Hypothesis (Postorder processing)
        int left = helper(root->left, res);
        int right = helper(root->right, res);
        
        // Node has to take decision to pass the best value
        // The subtree path sums might be less than node value 
        // because of negative values
        
        // Pass the best value to the caller
        int temp = max(root->val, max(left, right) + root->val);
        
        int ans = max(temp, left + right + root->val);
        res = max(ans, res);
        return temp;
    }
    
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        helper(root, res);
        return res;
    }
};
