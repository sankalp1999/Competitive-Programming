int Solution::solve(vector<int> &a, vector<int> &b, vector<int> &c) {
    
    int i, j, k;
   i = j = k = 0;
   int min_so_far = INT_MAX;
   while( i < a.size() && j < b.size() && k < c.size())
   {
        
        
        min_so_far = min(max({abs(a[i] - b[j]), abs(b[j] - c[k]), abs(c[k] - a[i]) }), min_so_far);
        if(a[i] == b[j] && b[j] == c[k])return 0;
        int min_num = min(c[k], min(a[i], b[j]));
        // Assuming all of them are not equak
        // Move only the minimum pointer
        // cout << min_so_far << endl;
        
        // Moving only the minimum will certainly decrease the difference between
        // max and min.
        
        // Middle element is useless. 
        // Increasing max element won't help much as it will increase the difference.
        
        // After sometime, the middle or the max element will become the min element
        // since we are moving only the min element.
        if(a[i] == min_num)
        {
            i++;
        }
        else if(b[j] == min_num)
        {
            j++;
        }
        else if(c[k] == min_num)
        {
            k++;
        }
   }
   return min_so_far;
}
