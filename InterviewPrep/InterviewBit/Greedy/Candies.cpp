  int Solution::candy(vector<int> &A) {
    int n = A.size();
    int cand[n];
    fill(cand , cand + n , 1);

for(int i = 1; i < n; i++){
    if(A[i] > A[i-1]){ // check left side
        cand[i] = cand[i-1] + 1;
    }
}

for(int i = n-2; i >= 0; i--){
    if(A[i] > A[i+1]){ // check right side
        cand[i] = max(cand[i] , cand[i+1] + 1); // take maximum of both the cases
    }
}

return accumulate(cand , cand + n , 0);
