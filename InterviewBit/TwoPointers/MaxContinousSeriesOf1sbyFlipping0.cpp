vector<int> Solution::maxone(vector<int> &v, int m) {
    int i, j;
    int max_so_far = -1;
    int zeroCount = 0; // counting no. of zeros in window
    int pos = 0;
    i = 0; j = 0;
    int bestL;
    int one_count = 0;
    int bestR;
    
    while(j < v.size())
    {
        if(zeroCount <= m)
        {
            if(v[j] == 0)
                zeroCount++;
            j++;
        }
        if(zeroCount > m)
        {
            if(v[i] == 0)
            {
                zeroCount--;
            }
            i++;
        }
          if ((j - i > max_so_far) && (zeroCount<=m)) 
        { 
            max_so_far = j - i; 
            bestL = i; 
            bestR = j;
        } 
    }
 
    // cout << max_so_far << endl;
    vector<int> res;

    for(int i = bestL; i < bestR; i++)
    {
        res.push_back(i);
    }
    return res;
}
