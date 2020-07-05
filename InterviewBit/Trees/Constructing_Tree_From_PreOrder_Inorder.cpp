/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* helper(vector<int>& pre, vector<int>& in, int is, int ie, int ps, int pe, unordered_map<int,int>& m)
{
    if(is > ie)return NULL;
    // Get the index of the root in the inorder array
    int root_index = m[pre[ps]];
    TreeNode* head = new TreeNode(in[root_index]);
    int left_is = is;
    int left_ie = root_index - 1;
    int left_ps = ps + 1;
    int left_pe = left_ie - left_is + left_ps;
    int right_is = root_index + 1;
    int right_ie = ie;
    int right_ps = left_pe + 1;
    int right_pe = pe;
    head->left = helper(pre,in,left_is,left_ie,left_ps,left_pe, m);
    head->right = helper(pre,in, right_is,right_ie, right_ps, right_pe, m);
    return head;
}
 
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {
    unordered_map<int,int> m;
    int n = pre.size();
    for(int i = 0; i < n; i++)
    {
        m[in[i]] = i;
    }
    int is, ie, ps, pe;
    is = 0;
    ps = 0;
    ie = n -1;
    pe = n -1 ;
    return helper(pre, in, is, ie, ps, pe, m);
}
