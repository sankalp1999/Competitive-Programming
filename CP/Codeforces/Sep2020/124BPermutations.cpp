#include <bits/stdc++.h>
using namespace std;

/*
Constraints indicate that you can brute force
or perform a permutation.
So
try out all the permutations.
*/
typedef long long int lli;

int main() {
	int n, k;
	cin >> n >> k;
	int arr[n][k] ;
	for(int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		for(int j = 0; j < k; j++)
		{
			char c = temp[j];
			arr[i][j] = c - '0';
		}
	}
	vector<int> p;
	for(int i = 0; i < k; i++)
	{
		p.push_back(i); // Permutation to perform using this.
	}
	lli res = INT_MAX;
	do
	{
		lli ma, mi;
		ma = INT_MIN;
		mi = INT_MAX;
		for(int i = 0; i < n; i++)
		{
		
			lli x = 0;
			for(int j = 0; j < k; j++)
			{
				x = 10*x + arr[i][p[j]];	//    (x *= 10) += a[i][p[j]];
			}
			ma = max(ma,x);
			mi = min(mi,x);
		}
		res = min(res, ma - mi);
	}while(next_permutation(p.begin(), p.end()));
	
	cout << res << endl;
	return 0;
}
