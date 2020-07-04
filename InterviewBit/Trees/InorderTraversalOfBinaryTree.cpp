
/* Maximum Binary Tree on Leetcode is a similar problem */

/*
Note that the root is the max element in the whole array. Based on the info, can you figure out the position of the root in inorder traversal ? If so, can you separate out the elements which go in the left subtree and right subtree ?
Once you have the inorder traversal for left subtree, you can recursively solve for left subtree. Same for right subtree.
 TreeNode* builder(int l, int r, vector<int>& v)
 */
 {
    if(l > r)return NULL;
    int max = v[l];
    int pos = l;
    for(int i = l; i <= r; i++)
    {
        if(v[i] > max)
        {
            max = v[i];
            pos = i;
        }
    }
    TreeNode* root = new TreeNode(v[pos]);
    root->left = builder(l, pos - 1, v);
    root->right = builder(pos + 1, r, v);
    
    return root;
 }
 
TreeNode* Solution::buildTree(vector<int> &A) {
    return builder(0, A.size() - 1, A);
      
}
