

int Solution::minimize(const vector<int> &a, const vector<int> &b, const vector<int> &c) {
    
   int i, j, k;
   i = j = k = 0;
   int min_so_far = INT_MAX;
   while( i < a.size() && j < b.size() && k < c.size())
   {
        min_so_far = min(max({abs(a[i] - b[j]), abs(b[j] - c[k]), abs(c[k] - a[i]) }), min_so_far);
        if(a[i] == b[j] && b[j] == c[k])return 0;
        // Assuming all of them are not equak
        // Move only the minimum pointer
        // cout << min_so_far << endl;
        
        // Moving only the minimum will certainly decrease the difference between
        // max and min.
        
        // Middle element is useless. 
        // Increasing max element won't help much as it will increase the difference.
        
        // After sometime, the middle or the max element will become the min element
        // since we are moving only the min element.
        if(a[i] <= b[j] && a[i] <= c[k])
        {
            i++;
        }
        else if(b[j] <= a[i] && b[j] <= c[k])
        {
            j++;
        }
        else if(c[k] <= a[i] && c[k] <= b[j])
        {
            k++;
        }
   }
   return min_so_far;
}
