
/* In this solution, I use a min heap.
Thus, while making the heap, we don't allow the heap capacity to cross k.
Whenever, we reach k, we pop out the top.
At the end, kth largest elements will be left in the heap.
*/

vector<int> Solution::solve(vector<int> &A, int k) {
        
        priority_queue<int,vector<int>, greater<int>> min_heap;
        // priority_queue<int>(A.begin(), A.end()) can also be done
        // to avoid for loop;
        for(int i = 0; i < A.size(); i++)
        {
            min_heap.push(A[i]);
            if(min_heap.size() > k)min_heap.pop();
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
