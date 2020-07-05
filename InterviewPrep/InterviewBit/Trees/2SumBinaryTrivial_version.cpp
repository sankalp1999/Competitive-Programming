/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode* A, vector<int>& v)
{
    if(A)
    {
        helper(A->left, v);
        v.push_back(A->val);
        helper(A->right, v);
    }
}
int Solution::t2Sum(TreeNode* A, int B) {
    vector<int> v;
    helper(A, v);
    int l =0;
    int r = v.size() - 1;
    while(l < r)
    {
        int sum = v[l] + v[r];
        if(sum < B)
        {
            l++;
        }
        else if(sum > B)r--;
        else 
            return 1;
    }
    return 0;
}
