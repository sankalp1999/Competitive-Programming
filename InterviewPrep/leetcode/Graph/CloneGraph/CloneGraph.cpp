
/*
I was able to do this question completely on my own.
It was probably possible because I have done the clone linked list with random pointers problem earlier.

First, we make all the graph nodes with a bfs traversal.
During traversing, we maintain map links between the original node and the new made node.

We again do a bfs and this time, we link the clone nodes to their adjacent nodes
using m[top]->neighbors.push_back(m[child]) 

Check the code for this line.
Main idea is access of the clone nodes using the original nodes.

*/
class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> m;
        unordered_set<int> s;
        vector<Node*> v;
        if(node == NULL)return NULL;
        
        Node* root = new Node(node->val);
        if(node->neighbors.empty() )
        {
            return root;
        }
        queue<Node*> q;
        q.push(node); // BFS traversal to create the new nodes and build the mappings 
        while(!q.empty())
        {
            auto top = q.front();
            q.pop();
            for(auto child : top->neighbors)
            {
                if(s.find(child->val) == s.end())
                {
                    s.insert(child->val);
                    Node* clone = new Node(child->val);
                    m[child] = clone;
                    q.push(child);
                }
            }

        }
        Node* temp = node;
        s.clear(); // Reuse stuff we used earlier
        q.push(temp);
        s.insert(temp->val);
        while(!q.empty())
        {
            auto top = q.front();
            q.pop();
            for(auto child : top->neighbors)
            {
              
                m[top]->neighbors.push_back(m[child]); // Accessing clone nodes using original nodes.
                if(s.find(child->val)==s.end())
                {
                    s.insert(child->val);
                    q.push(child);
                  
                }
            }
        }
        
        return m[node];
        }
};
