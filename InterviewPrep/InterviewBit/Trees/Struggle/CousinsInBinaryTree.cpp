/*
 https://www.youtube.com/watch?v=4mTFS1ls3ho
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        bool x_exist, y_exist;
        q.push(root);
        while(!q.empty())
        {
            int count = q.size();
            x_exist = false;
            y_exist = false;
            while(count--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->val==x)x_exist = true;
                if(temp->val==y)y_exist = true;
                if(temp->left && temp->right)
                {
                    if(temp->left->val == x && temp->right->val == y)return false;
                    if(temp->left->val == y && temp->right->val == x)return false;
                }
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(x_exist && y_exist)return true;
        }
        return false;
        
    }
};
