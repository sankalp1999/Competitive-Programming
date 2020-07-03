/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root) {
    
    
        
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(root == NULL)
            return result;
        q.push(root);
        int flag = 0; // to decide when to fill from beginning or reverse
        while(!q.empty())
        {
            int count = q.size(); 
            vector<int> p(count);
            int i = 0;
            while(count--)
            {
                TreeNode* temp = q.front();
                flag % 2 == 0 ? p[i++]=temp->val : p[count]=temp->val;
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            result.push_back(p);
            flag = !flag; // invert the flag
            p.clear();
        }
        return result;
}
