/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void helper(vector<int>& v, TreeNode* head, int k, int& flag)
 {
     if(head == NULL)return;
     if(head-> val == k && flag == 0)
     {
        v.push_back(head->val);
        flag = 1;
        return ;
     }
     v.push_back(head->val);
     helper(v, head->left, k,flag);
     if(flag)return;
     helper(v, head->right, k, flag );
     if(flag)return;
     v.pop_back();
     return;
 }
 
 
vector<int> Solution::solve(TreeNode* head, int k) {
    vector<int> v;
    int flag = 0;
    helper(v, head, k, flag);
    return v;
}
