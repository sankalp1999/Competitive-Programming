/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode* prev = NULL;
    TreeNode* curr;
    s.push(root);
    while(!s.empty())
    {
        TreeNode* temp = s.top();
        if(prev)prev->right = temp;
        s.pop();
        
        while(temp)
        {
            if(temp->right)s.push(temp->right);
            // Now, we are done with the right pointer usage
            temp->right = temp->left; //Change right pointer to left pointer
            temp->left = NULL; //Make the left node null
            prev = temp;
            temp = temp->right; // Originally temp = temp->left but now
                                // it has been replaced by temp->right
        }
    }
    return root;
    
    
    
}
