int Solution::trap(const vector<int> &arr) {
    
    stack<int> s;
    int curr = 0;
    int ans = 0;
    while(curr < arr.size())
    {
        while(!s.empty() && arr[curr] >= arr[s.top()]) // while the curr bar is longest bar
        // this means it is bounding the bars inside the stack
        {
            int top = s.top();
            s.pop();
            if(s.empty())break; // If stack is empty, no lower bound. Hence, break.
            int bounded_height = min(arr[curr], arr[s.top()]) - arr[top]; // Minimum - the current height of the tower
            int distance = curr - s.top() - 1; // distance is measured in indices.
            ans = ans + bounded_height * distance;
        }
        s.push(curr);// push the indices
        curr++;
    }
    return ans;
    
}
