/*
Algorithm

IN short: Find the split point.

Start traversing the tree from the root node.
If both the nodes p and q are in the right subtree, then continue the search with right subtree starting step 1.
If both the nodes p and q are in the left subtree, then continue the search with left subtree starting step 1.
If both step 2 and step 3 are not true, this means we have found the node which is common to node p's and q's subtrees. and hence we return this common node as the LCA.

*/
class Solution {
public:
    
    
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root == NULL)return NULL;
        if(root->val > p->val && root->val > q->val)
        {
            return helper(root->left, p, q);
        }
        else if(root->val < p->val && root->val < q->val)
        {
            return helper(root->right, p , q);
        }
        else
        {
            return root;
        }
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL)return NULL;
        return helper(root, p, q);
    }
};
