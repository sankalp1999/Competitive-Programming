#include <iostream>
#include <queue>
#include <vector>
using namespace std;


/*
The elements are max to max k away to the right/left in the array.
So, we need to maintain a heap of size k. 
That way, if we keep touching size k heap,
then we will always have the min element at the top.

N log k solution.
We are traversing over n elements and doing N insertions
so N log k.

*/

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<int,vector<int>, greater<int>> pq;
        int i;
        for(i = 0;i < k; i++)
        {
            pq.push(v[i]);
        }
        
        while(i < n && !pq.empty())
        {
            auto idx = pq.top();
            pq.pop();
            cout << idx << " ";
            pq.push(v[i++]);
        }
        while(!pq.empty())
        {
            auto idx = pq.top();
            pq.pop();
            cout << idx << " ";
        }
        cout << endl;
    }
	return 0;
}
