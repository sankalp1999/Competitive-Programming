
/* Explanation for right prestart
I hope this helps those folks who can't figure out how to get the index of the right child:

Our aim is to find out the index of right child for current node in the preorder array
We know the index of current node in the preorder array - preStart (or whatever your call it), it's the root of a subtree
Remember pre order traversal always visit all the node on left branch before going to the right ( root -> left -> ... -> right), therefore, we can get the immediate right child index by skipping all the node on the left branches/subtrees of current node
The inorder array has this information exactly. Remember when we found the root in "inorder" array we immediately know how many nodes are on the left subtree and how many are on the right subtree
Therefore the immediate right child index is preStart + numsOnLeft + 1 (remember in preorder traversal array root is always ahead of children nodes but you don't know which one is the left child which one is the right, and this is why we need inorder array)
numsOnLeft = root - inStart.
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
    ie = n - 1;
    pe = n - 1;
    return helper(pre, in, is, ie, ps, pe, m);
}
