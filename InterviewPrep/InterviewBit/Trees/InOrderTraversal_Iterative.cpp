/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* ptr) {
    
    stack<TreeNode*> s;
    vector<int> res;
    do
    {   while(ptr!=NULL)  // Keep pushing left child till you don't have one.
        {
            s.push(ptr);
            ptr = ptr->left;
        }
    TreeNode* top = s.top(); 
    if(s.empty())break;
    if(!s.empty())
        s.pop();
    res.push_back(top->val); // Print the root or done with the root
    ptr = top->right; // Time for the right. Again, hunt down all the left children
    }while(1) ;
    return res;
    
        
    }
