
/*
 *Given an array ‘A’ of sorted integers and another non negative integer k,
 *find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.
 */
int Solution::diffPossible(vector<int> &A, int B) {
   int n=A.size();
   int p=0,q=0;
   while(j<n){
       if(i==j)
            q++;
       else if(A[j]-A[i]==B)
        return 1;
       else if(A[j]-A[i]>B)
            p++;
       else if(A[j]-A[i]<B)
            q++;
   }
   return 0;
}
