class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.size() == 0 )return 0;
        int sum = 0;
        vector<int> maxR(height.size());
        vector<int> maxL(height.size());
        
        int n = height.size();
        
        // Finding the max left based heights
        maxL[0] = height[0];
        for(int i = 1;i < n; i++)
        {
            maxL[i] = max(maxL[i-1], height[i]);
        }
        
        maxR[height.size() - 1] = height.back();
        
        for(int i = n - 2; i >= 0; i--)
        {
            maxR[i] = max(maxR[i+1], height[i]);
        }
        
        for(int i = 0;i < n; i++)
        {
            sum += min(maxR[i], maxL[i]) - height[i];
        }
        return sum;
        
    }
};
