/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root==nullptr){
            return 0;
        }
        else if (root->right==nullptr||root->left==nullptr){
            return max(minDepth(root->left),minDepth(root->right))+1;
        }
        else{
            return min(minDepth(root->left),minDepth(root->right))+1;
        }
    }
};
class Solution {
public:
    int minDepth(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        if(root!=NULL && root->left == NULL && root->right == NULL)
            return 1;
       
       int leftdepth = root->left!=NULL ? minDepth(root->left):INT_MAX;
       int rightdepth = root->right!=NULL ? minDepth(root->right):INT_MAX;
     
        
     
        return min(leftdepth, rightdepth) + 1;
    }
};
