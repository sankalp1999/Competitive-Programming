/*
At any point of time, we want to add two ropes with the minimum length.
[1,2,3,4,5]
1 + 2 = 3
3  +3 = 6 
Now we are left ropes of length 6, 4, 5
At this point, we want to select 4 + 5 = 9
6 + 9 = 15 
Adding 3, 6, 9 and 15, we get 33.

I got a little bit stuck on this question probably due to fatigue.

*/

int Solution::solve(vector<int> &A) {

    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0; i < A.size(); i++)
    {
        pq.push(A[i]);
    }
    int sum = 0;
    while(!pq.empty())
    {
        int top1 = pq.top();
        pq.pop();
        
        int top2 = pq.top();
        if(pq.empty())
        {
            return sum;
            
        }
        pq.pop();
        int add = top1 + top2;
        sum += add;
        pq.push(add);
    }
    return sum;

}
