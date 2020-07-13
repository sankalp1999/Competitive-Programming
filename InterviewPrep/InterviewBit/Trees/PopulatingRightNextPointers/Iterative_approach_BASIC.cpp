/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)return NULL;
        queue<Node*> q;
        q.push(root);
        vector<Node*> v;
        while(!q.empty())
        {
            int count = q.size();
            while(count--)
            {
                Node* temp = q.front();
                q.pop();
                v.push_back(temp);
              
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            // This iteration of the queue is done.
            for(int i = 0;i < v.size() - 1 ; i++)
            {
                v[i]->next = v[i+1];
            }
            v.clear();
        }
        return root;
    }
};
