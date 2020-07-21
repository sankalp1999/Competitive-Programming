/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    
    unordered_map<UndirectedGraphNode*,UndirectedGraphNode*> m;
    queue<UndirectedGraphNode*> q;
    q.push(node);
    UndirectedGraphNode* temp = new UndirectedGraphNode(node->label);
    m[node] = temp;
    // If no cycle in graph, then you don't need visited array 
    
    while(!q.empty())
    {
        UndirectedGraphNode* top = q.front();
        q.pop();
        // Each node will be visited atleast once here.
        
        /*
        The graph is undirected hence we will see each node
        twice in the loop. We don't want to add it twice to the loop.
        But, we need to make the connections. So, we keep that
        outside the if condition.
        */
        
        for(auto child : top->neighbors)
        {
            UndirectedGraphNode* temp = new UndirectedGraphNode(child->label);
            
            if(m.find(child) == m.end()) // Acts as visited array to avoid pushing into queue again
            {
                q.push(child);
                m[child] = temp; // Do the cloning.
            }
            
           m[top]->neighbors.push_back(m[child]); // Make the edge connection for the clone. It's just adding that neighbor.
            // The hashtable allows constant time access here.
        }
    }
    return m[node];
}
