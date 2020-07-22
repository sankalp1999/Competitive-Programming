#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
#define endl '\n'
using namespace std;
typedef long long int lli;
lli fact[100001];
int N = 100000;
void init()
{	// generating the factorial	
	fact[0] = 1;
	for(int i = 1 ; i <= N; i++)
	{
		fact[i] = (fact[i-1]*i)%mod; 
	}
}
lli power(lli a, lli n)
{
	lli res = 1;
	while(n)
	{
		if(n&1)// means odd
		{
			res = (res * a)%mod;
		}
		n >>= 1;
		a = (a*a)%mod;
	}
	return res;
}
int main()
{
	lli t, n, bitsA, bitsB, res, _min, _max;
	char c;
	cin >> t;
	init();
	while(t--)
	{
		cin >> n;
		bitsA = 0;
		bitsB = 0;
		for(int i = 1; i <= n; i++) cin >> c, bitsA += c - '0';
		for(int i = 1; i <= n; i++)cin >> c, bitsB += c - '0';
		res = 0 ;
		_max = bitsA + bitsB - 2*max((lli)0, bitsB + bitsA - n);
		_min = abs(bitsA - bitsB);
		for(int i = _max; i>=_min; i-= 2)
		{
			lli tmp = (power(fact[i], mod - 2)*fact[n])%mod;
			tmp = (tmp * power(fact[n-i], mod - 2))%mod;
			res = (res + tmp)%mod;
			
		}
		cout << res << endl;
	}
}