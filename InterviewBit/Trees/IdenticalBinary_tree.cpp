
/* Editorial solution is better than mine 
Main idea is to focus on a node.
Then, decide which nodes are gonna be equal so as to declare the trees binary?
-> Handle NULL cases
-> Handle one NULL cases
Finally, figure out the recursion calls.

*/



int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    
    if( A && B)
    {
        if(A->val == B->val)
        {
            int a = isSameTree(A->left, B->left);
            int b = isSameTree(A->right, B->right);
            return a && b;
        }
        else
            return 0;
            
    }
    else if(A == NULL && B == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



class Solution {
    public:
        bool isSameTree(TreeNode *p, TreeNode *q) {
            if (p == NULL && q == NULL) return true;
            if (p == NULL || q == NULL) return false;
            return ((p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right)); 
        }
};
