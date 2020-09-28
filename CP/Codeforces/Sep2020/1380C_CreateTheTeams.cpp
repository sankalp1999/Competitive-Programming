#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		lli n, x;
		cin >> n >> x;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end(), greater<int>());
		lli count = 1;
		lli res = 0;// answer
		// Current number will be the minimum for that team
		// thats the thing we are ensuring at each time step
		for(int i = 0; i < n; i++)
		{
			if(v[i] * count >= x)
			{
				count = 1;
				res++;
			}
			else
				count++;
		}
		cout << res << endl;
	}
	return 0;
}
