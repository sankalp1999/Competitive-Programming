/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        if(root == NULL)
            return "null";
        string left = serialize(root->left);
        string right = serialize(root->right);
        return to_string(root->val) + "," + left + "," + right ; 
        
    }
    TreeNode* helper(queue<string>& q)
    {
        string top = (q.front());
        q.pop();
        if(top == ("null") )return NULL;
        TreeNode* head = new TreeNode(stoi(top));
        head->left = helper(q);
        head->right =helper(q);
        return head;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string temp = "";
        for(char c : data)
        {
            if(c != ',')
            {
                temp += c;
            }
            else if(c == ',')
            {
                q.push(temp);
                temp = "";
            }
        }
        q.push(temp);
        int id = 0;
        // for(string s : v)cout << s << " ";
        return helper(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
