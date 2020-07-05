/*
We use greedy strategy here. We see that the safe move is that we allot mice to their nearest holes.
This way, it will take minimum time for each of the mice to reach to their hole.
The maximum time for some mice i to reach it's hole i is our result.
Sort both the vectors.
Then, find maximum difference.
*/


int Solution::mice(vector<int> &A, vector<int> &B) {
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int diff = 0;
    for(int i = 0; i < A.size(); i++)
    {
        diff = max(diff, abs(A[i] - B[i]));
    }

    return diff;
    
}
