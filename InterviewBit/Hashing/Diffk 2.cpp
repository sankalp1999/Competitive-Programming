int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_map<int,int> m;
    for(int i = 0; i < A.size(); i++)
    {
        int complement = (A[i] - B);
        int complement2 = (A[i] + B);
        if(m.find(complement) != m.end())
        {
            return 1;
        }
        if(m.find(complement2) != m.end())
        {
            return 1;
        }
        m[A[i]] = i;
    }
    return 0;
}
