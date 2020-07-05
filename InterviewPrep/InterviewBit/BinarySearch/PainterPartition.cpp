// Binary search the answer concept
// Similar to book allocation problem
bool isValid(vector<int> &C, long long int mid, long long int B, long long int A)
{
    int n = C.size();
    long long int sum = 0;
    int PainterCount = 1; // Initially, we are starting with one.
    for(int i = 0; i < n; i++)
    {
        sum += C[i]*B;
        if(sum > mid*B)
        {
            PainterCount++;
            sum = C[i]*B; // start again with that number
        }
        if(PainterCount > A)
        {
            return false;
        }
    }
    return true;
}


int Solution::paint(int A, int B, vector<int> &C) {
    
    // We have A painters
    // B is just a multiplying factor and not plays a role in logic.
    
    // So, A painters will paint together and we have to find the minimum time 
    // that will atmost will be taken if A painters are allocated 
    // to complete painting all the boards.
    // Or max of minimum time taken by painters
    
    // Max time for an individual limit is the lower bound.
    // Upper bound can be the entire time.
    
    // So, we binary search the time.
    // We try to see if A painters fit the mid value of time.
    // If yes, we try for lesser time.
    // If no, we try for more time.
    
    long long int mod = 10000003;
    long long int MaxNum = *max_element(C.begin(), C.end());
    long long int sum = 0;
    for(long long int i : C)
    {
        sum += i;
    }
    if(C.size() == A)return (MaxNum*(long long)B)%mod;
    long long int low, high, mid;
    low = MaxNum;
    high = sum;
    long long int res = 0;
    while(low <= high)
    {
        
        mid = low + (high - low)/2;
        // cout << mid << endl;
        if(isValid(C, mid, B, A) == true)
        {
            res = mid;
            high = mid - 1;
        }
        else if(isValid(C, mid, B, A) == false)
        {
            low = mid + 1;
        }
    }
    return (res*B)%mod;
    
    
    
}
