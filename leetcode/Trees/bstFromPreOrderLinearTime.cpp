

/* The main idea here is 
we use a limit. Everything smaller than the limit goes to the left.
LEFT : If current node value is above the limit value, return NULL;
RIGHT : Here, we are bounded by the parent's parent value. So if our value is more than parents value
then return NULL otherwise right child is ok.

Refer Errichto's video for explanation. https://www.youtube.com/watch?v=RyAGEb4VWo0&t=529s

*/



class Solution {
public:
    TreeNode* helper(vector<int>& preorder, int& id, int limit)
    {
        if(id >= preorder.size() || preorder[id] > limit)
            return NULL;
        TreeNode* head = new TreeNode(preorder[id]);
        id++;
        head->left = helper(preorder, id , head->val);
        head->right = helper(preorder, id , limit);
        return head;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int id = 0;
        return helper(preorder, id, INT_MAX);
        
    }
};
