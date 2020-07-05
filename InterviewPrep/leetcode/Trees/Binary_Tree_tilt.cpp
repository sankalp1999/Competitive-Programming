
/*  Main idea
-> We have to calculate the tilt of each subtree then add it to get the tilt of the complete tree.
The problem description on Leetcode is horrible for this question.

We use postorder traversal. We start from the leaf nodes to calculate the tilt
, passing the subtree sums above.
left + right + root->val is to pass the sum above for a left subtree or a right subtree.

*/

class Solution {
public:
    int result = 0;
    int PostOrder(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int left = PostOrder(root->left); // left SubTree values
        int right = PostOrder(root->right); // right SubTree values
        result += abs(left -right); // add tilt value for this tree
        return left + right + root->val; // return the sum of nodes of this subtree
    }
    int findTilt(TreeNode* root) {
       PostOrder(root);
        return result;
        
    }
};
