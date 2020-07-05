// Explanation https://github.com/Dedalus-Stephen/Find-median-of-row-wise-sorted-matrix


int Solution::findMedian(vector<vector<int> > &A) {
    
    int n = A.size();
    int m = A[0].size();
    int low = INT_MAX;
    int high = INT_MIN;
    
    for(int i = 0; i < n; ++i)
    {
        low = min( A[i][0], low );
        high = max(A[i][m-1], high);
    }
    long long int mid ;
    int desired = (n*m)/2 + 1 ;
    // The idea is there will be n*m/2 numbers behind it.
    while(low < high)
    {
        mid = (high - low)/2 + low;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            count += distance(A[i].begin(),upper_bound(A[i].begin(), A[i].end(), mid));
        }
        if(count < desired)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
        
    }
    return low;
    
}
