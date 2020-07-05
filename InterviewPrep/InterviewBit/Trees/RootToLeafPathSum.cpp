
void inorder(TreeNode* head, int k, int sum, vector<int>& v, vector<vector<int>>& p)
{
    if(head && !head->left && !head->right)
    {
        if(head->val + sum == k)
        {
            v.push_back(head->val); // not adding the leaf node value earlier
            p.push_back(v);
            v.pop_back(); // handle the last element since while going back, i don't need this.
        }
        else
            return;
            
    }
    if(head)
    {
        v.push_back(head->val); // keep adding value
        inorder(head->left, k, sum + head->val, v, p);
        inorder(head->right,k , sum + head->val , v, p);
        v.pop_back(); // when getting back, just remove that value
    }
}

vector<vector<int> > Solution::pathSum(TreeNode* head, int k) {
    
    vector<vector<int>> p;
    vector<int> v;
    inorder(head, k, 0, v, p);
    return p;
    
}
