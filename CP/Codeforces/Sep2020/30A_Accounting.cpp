#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	
	// B can be zero if x is zero. 0 raised to any power is 0
	if(b == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	// Cover the case when b != 0 and a == 0 or fractional
	if(a == 0 || abs(b) % abs(a) != 0)
	{
		
		cout << "No solution" << endl;
		return 0;
	}
	b = b / a;
	for(int i = -1001; i <= 1001; i++)
	{
		long long int res = 1;
		int e = 0;
		bool flag = false;
		while(abs(res)<=abs(b) && e <= n) // IF number becomes greater, then break
		{
			res = res * i; 
			e++;
			// cout << res << endl;
			if(res == b && e == n   )
			{
				flag = true;
				cout << i << endl;
				return 0;
			}
		}
	}
	cout << "No solution" << endl;
	
	return 0;
}