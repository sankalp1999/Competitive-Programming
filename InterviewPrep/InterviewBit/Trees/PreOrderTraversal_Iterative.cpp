vector<int> Solution::preorderTraversal(TreeNode* root) {
    stack<TreeNode*> s;
    vector<int> v ;
    s.push(root);
    while(!s.empty())
    {
        TreeNode* temp = s.top();
        s.pop();
        
        while(temp)
        {
        if(temp->right)s.push(temp->right);
            v.push_back(temp->val);
            temp = temp->left;
        }
            
    }
    return v;
}
