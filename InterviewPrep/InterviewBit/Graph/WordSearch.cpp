/* Multiple visit are allowed here. */



bool dfs(vector<string>& A, int i, int j, string& B, int  count)
{
    if(count == B.size())return true;
    
    if(i < 0 || i >= A.size() || j < 0 || j >= A[i].size() || 
    B[count] != A[i][j])
        return false;
    // char temp = A[i][j];
    // A[i][j] = ' ';/
    bool found = dfs(A,i+1,j,B,count+1) ||
                dfs(A,i-1,j,B,count+1)||
                dfs(A,i,j+1,B,count+1)||
                dfs(A,i,j-1,B,count+1);
    // A[i][j] = temp;
    return found;
}


int Solution::exist(vector<string> &A, string B) {
    
    for(int i = 0 ;i  < A.size(); i++)
    {
        for(int j = 0; j < A[i].size(); j++)
        {
            if(A[i][j] == B[0] && dfs(A, i, j, B, 0))
            {
                return 1;
            }
        }
    }
    return 0;
    
}

