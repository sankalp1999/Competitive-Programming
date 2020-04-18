vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

    vector<int> result ;
    int p, q;
    p=0;
    q=0;
  while(p < A.size() && q<B.size())
    {
        if(A[p]==B[q])
        {
            result.push_back(A[p]);
            ++p; ++q;
        }
        else if(A[p]<B[q])
            ++p;
        else
            ++q;
    }
    return result;
}
