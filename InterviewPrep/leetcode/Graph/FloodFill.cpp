class Solution {
public:
    
    bool isValid(int i, int j,vector<vector<int>>& image, int startColor )
    {
        int n = image.size();
        int m = image[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m )
        {
            return false;
        }
        
        if(image[i][j] != startColor)
            return false;
        return true;
    }
    void dfs(vector<vector<int>>& image, int x, int y, int startColor, int newColor)
    {
        image[x][y] = newColor;
     
        vector<int> dx = {-1 , 0 , 1 , 0};
        vector<int> dy = {0 , 1 , 0 , -1};

        for(int i = 0; i < 4; i++)
        {
           
            if(isValid(x + dx[i] , y + dy[i], image, startColor))
            {
                dfs(image, x + dx[i], y + dy[i], startColor, newColor);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        int startColor = image[sr][sc];
        if(startColor != newColor)dfs(image, sr, sc, startColor, newColor);
        return image;
        
    }
};
