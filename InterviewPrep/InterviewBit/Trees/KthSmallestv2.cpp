
/* Since inorder traversal starts with from 
the smallest value of the tree, this implies
that we can just decrement the counter whenever
we print a value.
So, when k becomes zero, we have reached the kth smallest element.
*/

/* Recursive Editorial Solution First */
class Solution {
    public:
        int find(TreeNode* root, int &k) {
            if (!root) return -1;
            // We do an inorder traversal here. 
            int k1 = find(root->left, k);
            if (k == 0) return k1; // left subtree has k or more elements.
            k--; 
            if (k == 0) return root->val; // root is the kth element.
            return find(root->right, k); // answer lies in the right node.
        }

        int kthsmallest(TreeNode* root, int k) {
           return find(root, k); // Call another function to pass k by reference.
        }
};

/* My solution is iterative */

int Solution::kthsmallest(TreeNode* root, int k) {
    
    if(root == NULL)return 0;
    stack<TreeNode*> s;
    while(1)
    {
        
        if(root != NULL)
        {
            s.push(root);
            root = root->left;
        }
        else
        {
            if(s.empty())break;
            root = s.top();
            s.pop();
            // v.push_back(root->val);
            k--;
            if(k == 0)
            return root->val;
            root = root->right;
        }
    }
    return 0;
}
