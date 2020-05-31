int Solution::searchMatrix(vector<vector<int> > &arr, int B) {
    // I will do a binary search vertically to find the row
    // Then do a lower_bound for that row only
    long long int low = 0;
    long long int high = arr.size() - 1;
    int m = arr[0].size();
    int res =0 ;
    long long int mid = 0;
    while(low <= high)
    {
            int mid = low + ((high - low) / 2);
            if(m > 1)
            {    
                if(arr[mid][0] <= B && B <= arr[mid][m-1])
                {
                    int ele = *lower_bound(arr[mid].begin(), arr[mid].end(), B);
                    if(ele == B)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else if(B > arr[mid][m-1])
                {
                    low = mid + 1;
                }
                else if(B < arr[mid][0])
                {
                    high = mid - 1;
                }
            }
            else if(m == 1)
            {
                if(B < arr[mid][0])
                {
                    high = mid - 1;
                }
                else if(B > arr[mid][0])
                {
                        low = mid  + 1;
                    
                }
                else if(arr[mid][0] == B)
                {
                    return 1;
                }
            }
    }
    return 0;
}
