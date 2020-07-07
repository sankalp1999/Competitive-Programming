/*
In this solution, we are just making a max heap.
Then extracting k times will leave the kth largest elements in the heap.
*/



vector<int> Solution::solve(vector<int> &A, int k) {
        
        priority_queue<int> min_heap;
        for(int i = 0; i < A.size(); i++)
        {
            min_heap.push(A[i]);
        }
        vector<int> v;
        while(!min_heap.empty() && k--)
        {
            int top = min_heap.top();
            min_heap.pop();
            v.push_back(top);
            
        }
        return v;
}
