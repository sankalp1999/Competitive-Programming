#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		long long int rs = 0;
		for(int i =0 ; i <n ;i++)
		{
			cin >> v[i];
			rs += v[i];
		}
		if(rs == 0)
		{
			cout << "NO" << endl;
			continue;
		}
		else if(rs > 0) // Running sum will always be positive. Negative 
		// num can't negate and make zero ever.
		{
			sort(v.begin(), v.end(),greater<int>());
		}
		else if(rs < 0)
		{
			sort(v.begin(), v.end());
		}
		cout << "YES" << endl;
		 for(int i : v)
	    {
	    	cout << i << " ";
	    }
	    cout << endl;
		
	}
	return 0;
}