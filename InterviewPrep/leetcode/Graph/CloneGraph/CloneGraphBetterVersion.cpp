/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> m;
        unordered_set<int> s; // This ensures safety if graph contains cycles.
        vector<Node*> v;
        if(node == NULL)return NULL;
        Node* root = new Node(node->val);
        if(node->neighbors.empty() )
        {
            return root;
        }
        queue<Node*> q;
        Node* temp = node;
        m[node] = new Node(node->val);
        q.push(temp);
        s.insert(temp->val);
        while(!q.empty())
        {
            auto top = q.front();
            q.pop();
            for(auto child : top->neighbors)
            {
                if(s.find(child->val)==s.end())
                {
                    s.insert(child->val);
                    Node* temp = new Node(child->val);
                    m[child] = temp; // Make the new mappings
                    q.push(child);
                }
                m[top]->neighbors.push_back(m[child]); // Build the new one since all it's neighbors have been made
                // So, it is possible to build the links.
            }
        }
        
        return m[node];
        }
};
