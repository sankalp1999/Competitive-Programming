#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;


/* Thought process
For last element it is clear that no greater element is going to be forward.
Is that a hint to start from the reverse direction??

We want to know whats forward. To keep the track of that, we can use a stack.

Algorithm:
We move from the end to the beginning of the array.
If current element is less than s.top()
then print s.top() since it is the next greater element for that.
else
pop() to check for other elements in the stack that may be greater than it.

If stack becomes empty in the process, add -1 to result array
otherwise, if you find, add s.top() to the array 

*/

int main() {

    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        vector<long long int> v(n);
        for(int i = 0;i < n; ++i)
        {
            cin >> v[i];
        }
        vector<long long int> res;
        res.push_back(-1);
        stack<long long int> s;
        s.push(v.back());
        for(int i = n - 2; i >= 0 ; i--)
        {
            if(!s.empty() && v[i] < s.top())
            {
                res.push_back(s.top());
            }
            else
            {
                while(!s.empty() && v[i] >= s.top())
                {
                    s.pop();
                }
                if(s.empty())
                {
                    res.push_back(-1);
                }else
                {
                    res.push_back(s.top());
                }
            }
            s.push(v[i]);
        }
        for(auto it = res.rbegin(); it != res.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
	return 0;
}
