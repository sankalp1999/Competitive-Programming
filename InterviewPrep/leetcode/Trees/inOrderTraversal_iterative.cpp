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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> v;
        stack<TreeNode*> s;
        while(1)
        {
            if(root != NULL)
            {
                s.push(root); // put the root in the stack
                root = root->left; // go left
            }
            else{
                if(s.empty())break;
                // Whenever root is null, time to pop and print data
                // and then push the right child inside.
                root = s.top();
                s.pop();
                v.push_back(root->val);
                
                root = root->right;
            }
        }
        return v;
        
    }
};
