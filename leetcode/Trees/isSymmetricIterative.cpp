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
    bool isSymmetric(TreeNode* root) {
        
       queue<TreeNode*> q;
       q.push(root);
       q.push(root);
        // The idea is that we will add 
        // leftsub.left and rightsub.right
        // These consecutive elements in the queue should be equal
        // similarly, we will add leftsub.right and rightsub.left
       while(!q.empty())
       {
            TreeNode* t1 = q.top();
            q.pop();
            TreeNode* t2 = q.top();
            q.pop();
           if(t1 == NULL && t2 == NULL )continue;
           if(t1 == NULL || t2 == NULL)return false; //symmetric property is broken
           if(t1->val != t2->val)return false;
           q.push(t1->left);// Compare leftSub.left and rightSub.right
           q.push(t2->right);
           q.push(t1->right); 
           q.push(t2->left);
       }
        return true;
};
