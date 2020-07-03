
/* Main idea
On thinking for a few minutes, I realised that we have to print
the last element on each level of a level order traversal. So,
how to capture that last element?
We just have to print when there is only element left in the queue.
*/
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> right;
        queue<TreeNode*> q;
        if(root == NULL)
            return right;
        q.push(root);
        while(!q.empty())
        {
            int count = q.size(); 
            while(count--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(count == 0)
                {
                    right.push_back(temp->val); // just push the last element at each level 
                    
                }
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
        }
        return right;

    }
};
