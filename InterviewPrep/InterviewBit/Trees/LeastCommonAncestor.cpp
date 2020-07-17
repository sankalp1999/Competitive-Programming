

/*
Since one of the nodes may not be there in the tree,
it makes sense to first search for the node in the 
tree. Otherwise, it gets really difficult to implement
for that case.
Solution still remains O(N)
*/

 TreeNode* helper(TreeNode* root, int b, int c)
 {
     if(root == NULL)return NULL;
     if(root->val == b || root->val == c )
     {
         return root;
     }
     TreeNode* left = helper(root->left, b, c);
     TreeNode* right = helper(root->right, b , c);
     
     if(left == NULL)return right; // I will pass this up
     if(right == NULL)return left; // I will pass this down
     
     if(left && right)return root;
     
     return NULL;
 }
 
 
 bool find(TreeNode* root, int k)
 {
     if(root == NULL)return false;
     if(root->val == k)
     {
         return true;
     }
    return find(root->left, k) || find(root->right, k);
 }
 
int Solution::lca(TreeNode* A, int B, int C) {
    
    bool a = find(A, B);
    bool b = find(A, C);
    if(a == false || b == false)return -1;
    TreeNode* lca_node = helper(A, B, C);
    
    
    if(lca_node == NULL)return -1;
    return lca_node->val;
    
}
