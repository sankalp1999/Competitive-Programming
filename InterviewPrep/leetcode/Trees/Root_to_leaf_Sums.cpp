/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, vector<vector<int>>& p, vector<int>& v, int& res, int sum)
    {
        if(root==NULL)return ;
        if(root->left== NULL && root->right == NULL && res + root->val == sum )
        {
            v.push_back(root->val);
            p.push_back(v);
            v.pop_back();
            return ;
        }
        v.push_back(root->val);
        res += root->val;
        dfs(root->left,p,v,res, sum);
        dfs(root->right,p,v,res,sum);
        v.pop_back();
        res -= root->val;
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> p;
        vector<int> v;
        int res = 0;
        dfs(root, p, v, res, sum);
        return p;
    }
};
