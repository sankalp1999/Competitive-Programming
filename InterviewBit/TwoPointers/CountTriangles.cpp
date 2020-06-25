int Solution::nTriang(vector<int> &A) {
    sort(A.begin(), A.end());
    long long int count = 0;
    long long int mod = 1e9 + 7;
    if(A.size() == 3)
    {
        if(A[0] + A[1] > A[2])
            return 1;
    }
    for(int i = 0 ; i < A.size() - 2; ++i)
    {
        int k = i + 2; // i first pointer
        // j second pointer
        // k third pointer
        int j;
        for(j = i + 1;  j < A.size(); j++)
        {
            while(k < A.size() && A[i] + A[j] > A[k])
                k++;
           if(k > j)
        count += k - j - 1;
        }
 
    }
// 3 7 8 8 10 11
// Lets see for i = 0;
// 3 7 8 
// then 3 7 8 again
// 3  + 7 == 10
// update count += (k : 4 - j : 1 - 1 = )2
// for next j, we know that, since it satisfied for j - 1
// it will satisfy for j since A[j] > A[j-1](sorted array)
// So that much will get automatically added since we are adding
// k = 4 and A[k] = 10
// j = 2 now, so A[j] = 8
// 3 + 8 > 10 yes k++
// 3 + 8 > 11 no break
// count += 2 (5 - 2 - 1)

// and so on for each i and j. 

// O(n^2)
    return count%mod;
}
