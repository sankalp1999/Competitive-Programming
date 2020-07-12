class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {

        for(int i = 0;i < board.size(); i++)
        {
            for(int j = 0 ; j < board[i].size(); j++)
            {
                if(board[i][j] == word[0] && dfs(board, i ,j , word, 0))// run the flood fill from here.
                {
                    return true;
                }
            }
        }       
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, int i, int j, string& word, int count)
    {
        
        // CHeck bound i.e base case
      if(count == word.size())return true;
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] !=   word[count])return false;
  
        
        // we have to mark the position also in the board that it is visited
        char temp = board[i][j];
        board[i][j] = ' ';
        bool a = dfs(board,i+1,j,word,count+1)
        || dfs(board,i,j+1,word,count+1)
        ||  dfs(board,i-1,j,word,count+1)
        || dfs(board,i,j-1,word,count+1);
        board[i][j] = temp;
        return a;        
        
    }
    
    
    
};
