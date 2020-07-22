#include <bits/stdc++.h> 
using namespace std;
set<int> s;
void SieveOfEratosthenes(int n)
{
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	for(int p = 2; p*p <= n; p++)
	{
		if(prime[p] == true)
		{
			for(int i = p*p; i <= n; i+= p)
			{
				prime[i] = false;
			}
		}
	}
	for(int p = 2; p <= n; p++)
	{
		if(prime[p])
		{
			s.insert(p);
		}
	}
}
int main() {
	SieveOfEratosthenes((int)1e6);
	long long int n;
	cin >> n;
	// vector<int> v;
	for(int i = 0; i < n; i++)
	{
		long long int temp;
		cin >> temp;
		if(ceil(sqrt(temp)) == floor(sqrt(temp)))
		{
			const bool is_in = s.find((int)sqrt(temp)) != s.end();
			if(is_in){cout << "YES" << endl;}
			else{cout << "NO" << endl;}
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	

	return 0;
}