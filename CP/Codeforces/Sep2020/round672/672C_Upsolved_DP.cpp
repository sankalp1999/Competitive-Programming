#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		int n, q;
		cin >> n >> q;
		vector<long long int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		vector<long long int> d1(n + 1), d2(n + 1);
		d1[0] = 1e-18;
		d2[0] = 0; // negative
		for(int i = 0; i < n; i++)
		{	
			// prefix ending at odd length (most likely to be higher)
			d1[i + 1] = max(d1[i], d2[i] + v[i]); 
			d2[i + 1] = max(d2[i], d1[i] - v[i]);
		}
		cout << max(d1.back(), d2.back()) << endl;
		
	}
	return 0;
}