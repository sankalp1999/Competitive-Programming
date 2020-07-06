/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int search(TreeNode* A, int X, int level){
     if(A==NULL) return -1;
     if(A->val==X) return level;
     return(max(search(A->left, X, level+1), search(A->right, X, level+1)));
 }
 
 void aux(TreeNode* A, int X, int curr, int level, vector<int> &result){
    if(A==NULL) return;
    if(curr >= level-1){
        if(A->left!=NULL&&A->left->val==X) return;
        if(A->right!=NULL&&A->right->val==X) return;
        if(A->left) result.push_back(A->left->val);
        if(A->right) result.push_back(A->right->val);
        return;
    }
    if(A->left) aux(A->left, X, curr+1, level, result);
    if(A->right) aux(A->right, X, curr+1, level, result);
 }
 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>result;
    int level = search(A, B, 0);
    if(level==-1||level==0) return result;
    aux(A, B, 0, level, result);
    return result;
}

