/*
This problem reduces to counting connected components in a grid graph.
*/



bool isValid(int i, int j, int n, int m, vector<string>& A)
{
    if(i < 0 || i >= n || j < 0 || j >= m )
    {
        return false;
    }
    if(A[i][j] != 'X')return false;
    return true;
}

void dfs(int x, int y, vector<string>& A)
{
    A[x][y] = 'A';
    int n = A.size();
    int m = A[x].size();
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    for(int i = 0; i < 4; i++)
    {
        if(isValid(x + dx[i], y + dy[i], n, m, A))
        {
               dfs(x + dx[i], y + dy[i], A);
        }
    }
}

int Solution::black(vector<string> &A) {
    
    int cc = 0;
    
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < A[0].size(); j++)
        {
            if(A[i][j] == 'X')
            {
                dfs(i, j, A);
                cc++;
            }
        }
    }
    return cc;
    
    
}
