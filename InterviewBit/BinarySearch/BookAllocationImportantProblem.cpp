int Solution::books(vector<int> &arr, int target) {

    // This is a question of binary search on answer concept
    
    int sum = 0;
    int MaxNum = INT_MIN;
    
    for(int i : arr)
    {
        sum += i;
        if(i > MaxNum)
        {
            MaxNum = i;// start the search from the max number of pages that can 
                       // be allocated to one student
        }
    }
    if(arr.size() < target)return -1;
    else if(arr.size() == target)return MaxNum;
    int low = MaxNum;
    int high = sum;
    int mid;
    int res = -1; // result
    int i;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        int StudCount = 1;
        int CurrSum = 0;
        i = 0;
        while(i < arr.size())
        {
            if(arr[i] + CurrSum <= mid)
            {
                CurrSum += arr[i];
                i++;
            }
            else
            {
                StudCount++;
                CurrSum = 0;
            }
        }
        if(StudCount <= target)
        {
            res = mid;
            high = mid-1 ;
        }
        else
        {
            low = mid+1;
        }
    }
    return res;
    
}
