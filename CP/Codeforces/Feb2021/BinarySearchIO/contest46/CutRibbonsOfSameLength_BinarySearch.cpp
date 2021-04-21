
int solve(int mid, vector<int>& ribbons)
{
    int count = 0;
    for(int i = 0; i < ribbons.size(); i++)
    {
        // count the number of pieces of ribbons I can have
        // NOTE: No cutting and joining is happening.
        count += ribbons[i]/mid;
    }
    return count;
}


int solve(vector<int>& ribbons, int k) {
    // Already less than k is ignored.
    int max_ele = *max_element(ribbons.begin(), ribbons.end());
    int left = 1;
    int right = max_ele;
    int max_res = 0;

    while(left <= right)
    {
        int mid = (right - left)/2 + left;
    //    cout << "MID is : " << mid << endl;
        int val = solve(mid, ribbons);
        // cout << "VAL IS " << val << endl;
        if(val < k)
        {
            right = mid - 1;
        }
        else
        {
            if(val >= k)
                max_res = max(max_res, mid);
            left = mid + 1 ;
        }
    }
    if(max_res == 0)return -1;
    return max_res;
}