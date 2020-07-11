
// Find the dip from the end
// Then swap the dip element with the next greater element.
// Reverse the portion after the dip till the end.
// If no dip found, give reverse of full array.
// This can be observed with some paperwork.


vector<int> Solution::nextPermutation(vector<int> &A) {
    
    int n = A.size() - 1;
    int dip = -1;
    int next_greater = INT_MAX;
    int next_pos;
    for(int i = n; i > 0; i--)
    {
        if(A[i] > A[i-1])
        {
            dip = i - 1;
            break;
        }
    }
    if(dip == -1)
    {
        reverse(A.begin(), A.end());
        return A;
    }
    for(int i = dip + 1; i < A.size(); i++)
    {
        if(A[i] > A[dip] && A[i] < next_greater)
        {
            next_greater = A[i];
            next_pos = i;
        }
    }
    swap(A[next_pos], A[dip]);
    reverse(A.begin() + dip + 1, A.end());
    return A;
    
    
}
