/* 
Better than brute force solution.
O(N log N ) solution. (Because of sorting but otherwise O(N log k) solution.

After sorting in decreasing order
(0,0) is the largest
Next largest sum will (0,1) or (1,0)
so, we push {sum,(0,0)) into the heap
Next iteration we put
{sum, (1,0)) and (sum, (0,1)) 
       (2, 0)  (2,1)  (0,2) (1,1)
       (3,0)    (3,1) (1,2)  2,1)
 There is a chance that as we go further, the pair of indices might repeat inside the heap.

To avoid that, either use a set<pair<int,int>> or we use a slight trick.
We add the i,j+1 only once when i == 0. That 
0,0
1,0  0, 1
2,0  1,1
3,0  2,1 
4,0  3,1



*/     







vector<int> Solution::solve(vector<int> &a, vector<int> &b, int k) {
    
    sort(a.begin(),a.end(), greater<int>());

    sort(b.begin(), b.end(), greater<int>());
    
    priority_queue< pair <int, pair<int,int> > > max_heap;

    vector<int> v;

    max_heap.push({ a[0] + b[0] ,{0,0} });

    while(k--)
    {
        auto idx_top = max_heap.top();
        max_heap.pop();
        v.push_back(a[idx_top.second.first] + b[idx_top.second.second]);
        if(idx_top.second.first + 1 < a.size())
        {
            max_heap.push({a[idx_top.second.first + 1] + b[idx_top.second.second],{idx_top.second.first + 1,idx_top.second.second}});
        }
        if(idx_top.second.first == 0 && idx_top.second.second + 1 < b.size())
        {
            max_heap.push({a[idx_top.second.first] + b[idx_top.second.second + 1],{idx_top.second.first,idx_top.second.second + 1}});
        }
    }
    return v;
}
