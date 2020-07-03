 void inorder(TreeNode* head, vector<int>& v)
 {
     if(head)
     {
         inorder(head->left, v);
         v.push_back(head->val);
         inorder(head->right, v);
     }
 }
 
int Solution::kthsmallest(TreeNode* head, int k) {
    vector<int> v;
    inorder(head, v);
    return v[k-1];
}
