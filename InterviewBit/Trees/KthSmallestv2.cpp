
/* Since inorder traversal starts with from 
the smallest value of the tree, this implies
that we can just decrement the counter whenever
we print a value.
So, when k becomes zero, we have reached the kth smallest element.
*/


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
