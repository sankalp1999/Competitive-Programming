#include <iostream>
#include <vector>
#include <stack>
using namespace std;




/* 
This problem is a variation of the next greater element on the left.
https://www.youtube.com/watch?v=p9T-fE1g1pU&list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd&index=6
Refer this amazing channel
for more information. 
It is a simple problem.
*/


int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i = 0; i < n; i++)
	    {
	        cin >> v[i];
	    }
	    stack<pair<int,int>> s; // value, index
        vector<int> res;
	    // This question is a variation to nearest greater element on the left.
	    // Since we are looking for the first value that is greater than
	    // current element and on the left.
	    s.push({v[0], 0});
	    res.push_back(1); // for the first element, there is no element on the left
	    for(int i = 1; i < n; i++)
	    {
	        while(!s.empty() &&  s.top().first <= v[i]) // greater element
	        {
	            s.pop();
	        }
	        if(s.empty())
	        {
	            res.push_back(i+1);
	        }
	        else
	        {
	            res.push_back(i - s.top().second );
	        }
	        s.push({v[i], i});
	    }
	    for(int i : res)
	    {
	        cout << i << " ";
	    }
	    cout << endl;
	}
	return 0;
}
