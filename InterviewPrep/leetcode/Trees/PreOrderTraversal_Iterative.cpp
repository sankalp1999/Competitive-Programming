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
 
 // Here the main idea is to imitate the way the stack is filled.
 // In the stack, first push the right child and then the left child,
 // This way, the left child will get popped out first since 
 // stack is Last in First Out data structure.
 
 
 
 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;        
        if(root == NULL)
        {
            return v;         
        }
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
            v.push_back(temp->val); // print the root
            if(temp->right)
            {
                s.push(temp->right); // Stack last in first out
            }
            if(temp->left)
            {
                s.push(temp->left);
            }
        }
        return v;
    }
};
