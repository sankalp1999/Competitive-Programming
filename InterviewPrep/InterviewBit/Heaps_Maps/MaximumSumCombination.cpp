
/*
Explanation at leetcode for smallest variation of this question
https://leetcode.com/problems/find-k-pairs-with-smallest-sums/discuss/84607/Clean-16ms-C%2B%2B-O(N)-Space-O(KlogN)-Time-Solution-using-Priority-queue

Sure. Suppose you are at pair 0,0 (index 0 and index 0, not value), which is the current minimum.
Then you know the only two possible followers (immediate larger ones) are 0,1 and 1,0. Any other indices, say 1,1, 1,2, 3,3 have to be larger right?
So every time you get a current minimum i,j , you want to push i+1,j and i,j+1 into heap. You don't need to worry about others yet.

The problem here is, if you are at 2,3, you will push 3,3 and 2,4; then later, you are at 3,2. Then you will push 3,3, 4,2. so you pushed 3,3 twice.

But it is easy to realize, if you are at 2,3, and you haven't seen 3,2 yet (meaning 3,2 is either still in the queue but not popped yet or not even pushed into queue), you don't need to worry about 3,3 at this moment, because 3,2 is guaranteed to be no greater than 3,3. So you can wait till you see 3,2.

This basically means every time you see i,j you just need to push i+1, j into queue. i, j+1 can be pushed into queue later when you see i - 1, j + 1. The only exception to this is, when i == 0, there is no i-1, j+1 anymore, so you want to push both i+1, j and i, j+1 when i == 0.
*/




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
