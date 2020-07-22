#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define lli long long int 
#define REP(i,n) for (int i = 0 ;i < n; i++)

lli countDegree(lli x)
{
	lli count = 0;
	while(x%3==0)
	{
		count++;		
		x = x/3;
	}
	return count;
}
int main()
{
	lli n;
	cin >> n;
	lli temp;	
		vector<pair<lli,lli>> v;
	REP(i,n)
		{cin >> temp;
		v.push_back( {-countDegree(temp), temp});
		}
		sort(v.begin(), v.end());
	REP(i,n)
	{
		cout << v[i].second << " ";
	}
		
	
	
}
