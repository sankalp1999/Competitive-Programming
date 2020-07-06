int helper(Node* root, int& res)
{
    if(root == NULL)return 0;
    
    int left = helper(root->left, res);
    int right = helper(root->right, res);
    int temp = max(left, right) + 1;
    int ans = max(temp, left + right + 1); // either forward answer or i am the answer
    res = max(res, ans);
    return temp; // forward temp above.
}

int diameter(Node* node) {
    
    int res = INT_MIN;
    helper(node, res);
    return res;
}
