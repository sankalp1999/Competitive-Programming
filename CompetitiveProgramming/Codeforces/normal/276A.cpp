#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int max1 = INT_MIN;
	while(n--)
	{
		int f, t;
		cin >> f >> t;
		int ans;
		if(t <= k)
		{
			ans = f;
		}
		else
		{
			ans = f - (t - k);
		}
		max1 = max(max1, ans);
		
	}
	cout << max1 << endl;
	return 0;
}