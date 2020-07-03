


/* This is a slighly hacky solution.
To know that I am done on a level of binary tree,
i am using depth.
I save the depth in a pair<TreeNode*, int> variable.

*/

/*
It turns out using the whenever the queue is empty at starting 
after dequing, a new level starts
*/


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> v;
        if(root==NULL)return v;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int level = 1;
        vector<int> p;
        while(!q.empty())
        {
            pair<TreeNode*, int> temp = q.front();
            q.pop();
            int currlevel = temp.second;
            // cout << currlevel << endl;
            if(v.size() < currlevel)
            {
                vector<int> newone;
                v.push_back(newone);
            }
            v[currlevel-1].push_back(temp.first->val);
            if(temp.first->left)q.push({temp.first->left, currlevel + 1});
            if(temp.first->right)q.push({temp.first->right, currlevel + 1});
        
        }
        return v;
        
    }
};
