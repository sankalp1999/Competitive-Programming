
 TreeNode* helper(vector<int>& inorder, vector<int>& post, int l, int r, unordered_map<int,int>& m, int ps, int pe)
 {
   if (ps>pe || l>r) return NULL;
    TreeNode* head = new TreeNode(post[pe]);
    int curr = m[post[pe]];// index in the inorder
    head->left = helper(inorder, post, l, curr-1 ,m, ps, ps + curr - l - 1);
    head->right = helper(inorder,post, curr + 1, r,m, ps + curr - l , pe - 1 );
    return head;
 }
 
TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &post) {
    
    int l = 0;
    int r = inorder.size() - 1;
    unordered_map<int,int> m;
    for(int i = 0 ;i  < inorder.size(); i++)
    {
        m[inorder[i]] = i; // map the value to indexes.
    }
    int ps = 0;
    int pe = post.size() - 1;
    return helper(inorder, post, 0, r, m, ps, pe);
}

