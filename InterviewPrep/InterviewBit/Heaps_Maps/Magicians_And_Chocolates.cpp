
/* Explanation
Although, I did the problem on my own. It was a fairly easy problem.

The solution to this problem can be found greedily. At any time t, the kid will always choose the bag with the maximum number of chocolates and consume all it’s chocolates.
So we need to maintain the current maximum size among all bags for every time t = 1, … , K and also updating the sizes of the bags.
This can be done using a max heap : https://en.wikipedia.org/wiki/Min-max_heap
*/



int Solution::nchoc(int B, vector<int> &A) {
    // Start from the maximum
    // Now, magician will again will this one with B/2 
    
    // This B/2 will be more than some element in the array 
    // SO, tracking this is difficult 
    
    // 1. We want to get the max element at each step.
    
    // 2. Only sorting in descending order won't work since we need 
    // to track new entries
    
    // From 1 and 2 Use a heap
    priority_queue<int> maxheap(A.begin(), A.end());
    long long int sum = 0;
    long long int mod = 1e9 + 7;
    while(B--)
    {
        int idx = maxheap.top();
        maxheap.pop();
        sum  =  (sum%mod + idx%mod)%mod;
        maxheap.push(floor(idx/2));
    }
    return sum%mod;
    
    
    
    
    
}
