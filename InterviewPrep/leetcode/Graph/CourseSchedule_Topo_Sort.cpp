class Solution {
public:
    
    bool kahn(int numCourses, vector<int>& indegree, vector<vector<int>>& v)
    {
        queue<int> q;
        vector<int> topo;
        for(int i = 0 ;i < indegree.size(); i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            for(int child : v[top])
            {
                indegree[child]--;
                if(indegree[child] == 0)
                    q.push(child);
            }
            topo.push_back(top);
        }
        for(int i : topo)cout << i << " ";
        
        if(topo.size() == numCourses)return true;
        else return false;
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        
        vector<vector<int>> v(numCourses);
        vector<int> indegree(numCourses, 0);
        for(int i = 0; i < prerequisites.size(); i++)
        {
            v[prerequisites[i][1]].push_back(prerequisites[i][0]); 
            indegree[prerequisites[i][0]]++;
        }
        return kahn(numCourses, indegree, v);
    
    }
};
