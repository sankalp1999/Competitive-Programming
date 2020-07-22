
/*

In this solution, we swap the element(if it is positive) till it is equal to it's 
zero-based position. It is guaranteed that atmost 3 swaps would take place.


*/


int Solution::firstMissingPositive(vector<int> &A) {
         int n =A.size();
          for(int i = 0; i < n; i ++)
        {
            int pick = A[i];
            while(pick > 0 && pick <= n && A[pick-1] != pick)
            {
                swap(A[pick-1], pick);
            }
        }
        for(int i = 0; i < n; i ++)
          if(A[i] != i+1) return i+1;
        return n+1;
        }
    
