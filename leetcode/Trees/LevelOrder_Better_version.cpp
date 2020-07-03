
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(root == NULL)
            return result;
        q.push(root);
        while(!q.empty())
        {
            int count = q.size(); // at start of each row, we know
                                 // by the queue size that the next row contains
                                 // q.size() amount of elements
                                 // This makes it easy
            vector<int> p;
            while(count--)
            {
                TreeNode* temp = q.front();
                p.push_back(temp->val);
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            result.push_back(p);
            p.clear();
        }
        return result;
        
    }
};
