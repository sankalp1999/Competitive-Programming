vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    
    int k = B;
    int n = A.size();
    deque<int> dq;
    vector<int> indexes(n-k+1);
    int i = 0;
    if(n == 1)
    {
        return A;
    }
    // Pre-processing for sliding window
    // First, add elements from backing in such a way that
    // the largest element appears in the front.
    for(i = 0; i < k; ++i)
    {
        while(!dq.empty() && A[i] >= A[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(; i < n; i++)
    {   
        // Answer array
        indexes[i-k] = A[dq.front()];
        // We check if the first element is valid or not.
        // The above result is correct as it is the previous window's result
        while(!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        // Check from back and add element in descending order
        while(( !dq.empty() && A[i] > A[dq.back()] ) )
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    indexes[i-k] = A[dq.front()];
    return indexes;
    
}
