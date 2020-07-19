class Solution {
public:
    bool isValid(int i, int j, vector<vector<int>>& grid, int& perimeter)
    {
        int n = grid.size();
        int m = grid[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m)
        {
            perimeter++;
            return false;
        }
        if(grid[i][j] == 0)
        {   
            perimeter++;
            return false;
        }
        return true;
    }
    void dfs(int i, int j, vector<vector<int>>& grid, int& perimeter)
    {
        grid[i][j] = 2;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        for(int x = 0; x < 4; x++)
        {
            if(isValid(i + dx[x], j + dy[x], grid, perimeter))
            {
                if(grid[i + dx[x]][j + dy[x]] == 1)
                dfs(i + dx[x], j + dy[x], grid, perimeter);
            }
        }
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for(int i = 0;i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if( grid[i][j] == 1)
                {
                    dfs(i, j, grid, perimeter);
                    break;
                }
            }
        }
        return perimeter;
    }
};
