class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        
        int m = arr.size();
        if(m==0)return false;
        int n = arr[0].size();
        if(n == 0)return false;
  
        int ele = arr[0][n-1];
        int i = 0;
        int j = n-1;
        while(i < m && j >=0)
        {
            ele = arr[i][j];
            if(ele == target)return true;
            if(target < ele)
            {
                j--;// go left since can't move right
            }
            else if(target > ele)
            {
                i++;
            }
        }
        return false;
        
    }
};
