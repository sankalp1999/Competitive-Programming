
/*
This is a really good problem from recursion. It is similar to maximum path sum and diameter of binary tree in the sense
that the node has to decide to pass information up.

Case 1 We search from current node. If we find both left and right, I am the LCA.
Case 2 If i find either the right or the left, I am not the LCA but the LCA may be above me so I will pass this node.

*/



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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL)return NULL;
        if(p == root || q == root)return root;
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p ,q);
        
        if(left == NULL)return right; // I will pass this up
        if(right == NULL)return left; // I will pass this down
        
        return root; // I found both. Hence, pass this.
    
        
        
    }
};
