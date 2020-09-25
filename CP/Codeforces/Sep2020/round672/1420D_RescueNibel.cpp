/*
Great problem based on a standard problem.
Here, apart from finding the interesection of k intervals, we have to find the number of ways
to do that. 
The logic was pretty elegant. 
We implement the event algorithm related logic where we sort {entry,end} times in non-decreasing order.
Then, increment the count if we encounter a start event and decrement when we encounter the end.
No. of start events actually tells the number of events/ranges that intersect or are happening together.

Now, in calculating the number of ways, we can NCR math but the main thing is to not overcount.
So, we only the contribution of a certain line segment when we reach it's end point.

Also, we need to make sure that we take contribution of all segments with the segment whose end point has 
reached. So, that segment is included already. So, we do (n-1 choose k-1) for that.

Big shoutout to SecondThread for awesome explanation.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
const lli MAXN = 3e5 + 10;
lli mod = 998244353;
lli fact[MAXN];

long long pow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 
int inverse(int k)
{
	return pow(k, mod-2, mod);
}
 
 
long long binomial_coefficient(int n, int k) {
    return fact[n] * inverse(fact[k] * fact[n - k] % mod) % mod;
}
 
 
int main() {
	int n, k;
	fact[0] =  1;
	for (int i = 1; i < MAXN; i++) {
    fact[i] = fact[i - 1] * i % mod;
	}
	cin >> n >> k;
 
	vector<pair<int,char>> v;
	while(n--)
	{
		int l, r;
		cin >> l  >> r;
		v.push_back({l,'a'});
		v.push_back({r,'b'});
	}
	sort(v.begin(), v.end());
	long long int count = 0;
	long long int max_interval = 0;
 
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i].second == 'a')
		{
			max_interval++;
		}
		else if(v[i].second == 'b')
		{
 
			if(max_interval >= k)
		{	
			// To avoid overcounting, we choose the segments 
			// when they can be chosen for the last time.
			// We will consider the lines at the endpoint
			// Also, we wanna pick the line which is ending now.
			// We have to include that so NCR(n-1,k-1)
			count = (count%mod + binomial_coefficient(max_interval - 1, k - 1)%mod)%mod;
		}
			max_interval--;
	}
	
	}
	cout << count << endl;
	return 0;
}
