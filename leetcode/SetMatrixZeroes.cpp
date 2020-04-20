class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        unordered_set<int> vr;
        unordered_set<int> vc;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(matrix[i][j] == 0)
                {
                    vr.insert(i);
                    vc.insert(j);
                }
            }
        }
            
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                 if(vr.find(i) != vr.end() || vc.find(j) != vr.end())
                {
                    matrix[i][j]=0;
                }
                
            }
        }
        
    }
};
