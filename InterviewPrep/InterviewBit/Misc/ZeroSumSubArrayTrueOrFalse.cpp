int Solution::solve(vector<int> &A) {
    
    long long int sum = 0;
    unordered_set<long long int> s;
    s.insert(0);
    for(int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        if(s.find(sum) == s.end())s.insert(sum);
        else
        {
            return 1;
        }
    }
    return 0;
}
