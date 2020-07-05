class Solution {
public:
    int trap(vector<int>& height) {
        
        stack<int> s; // insert the indices of the elements.
        int curr = 0, ans = 0, distance = 0, bounded_height = 0;
        while(curr < height.size())
        {
            while(!s.empty() && height[curr] > height[s.top()])
            {
                int top = s.top();
                s.pop();
                if(s.empty()) // we need the lower bound.
                   break; // If stack is empty, then there is no lower bound
                
                distance = curr - s.top() - 1;
                bounded_height = min(height[curr], height[s.top()]) - height[top];
                ans += distance * bounded_height;
            }
            s.push(curr);
            curr++; 
        }
        return ans;
        
    }
};
