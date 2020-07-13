
/*
Iterative preorder traversal. 
Stored all the nodes in a vector and then just made the right links
to point to next node in that traversal. 
O(N) space and O(N) time.
*/



class Solution {
public:

    
    
    
    void flatten(TreeNode* root) {
        TreeNode* head = root;
        if(root == NULL)return ;
        stack<TreeNode*> s;
        s.push(root);
        vector<TreeNode*> q;
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
       
            while(temp!= NULL)
            {
                if(temp->right)s.push(temp->right);
                q.push_back(temp);
                temp = temp->left;
            }
        }
        for(int i = 0 ; i < q.size() - 1; i++)
        {
            q[i]->right = q[i+1];
            q[i]->left = NULL;
        }
    }
};
