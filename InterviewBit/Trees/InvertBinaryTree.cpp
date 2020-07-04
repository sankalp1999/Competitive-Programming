
/*
Easy question
1. Swap left and right at each step
2. Recurse
*/

TreeNode* Solution::invertTree(TreeNode* head) {
    
    if(head == NULL)return NULL;
    // swap 
    // do recursively the same till you reach the bottom.
    swap(head->left, head->right);
    invertTree(head->left);
    invertTree(head->right);
    return head;
}
