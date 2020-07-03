vector<int> Solution::maxone(vector<int> &v, int m) {
    
    int max_so_far = -1;
    int zeroCount = 0; // counting no. of zeros in window
    int i, j;
    i = 0; j = 0;
    int bestR, bestL;
    // Two pointer and sliding window
    while(j < v.size())
    {
        if(zeroCount <= m) 
        {
            if(v[j] == 0)
                zeroCount++;
            j++;
        }
        if(zeroCount > m) // If no. of zeros in window more than allowed, shrink window
        {
            if(v[i] == 0)
            {
                zeroCount--;
            }
            i++; // Move left towards right => shrinking
        }
          if ((j - i > max_so_far) && (zeroCount<=m)) // Updating max number of ones. 
        { 
            max_so_far = j - i; 
            bestL = i;  
            bestR = j;
        } 
    }
    vector<int> res;

    for(int i = bestL; i < bestR; i++)
    {
        res.push_back(i);
    }
    return res;
}
