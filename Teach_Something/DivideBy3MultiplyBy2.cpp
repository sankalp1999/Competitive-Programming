#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define lli long long int 
#define REP(i,n) for (int i = 0 ;i < n; i++)

// Here, we solve the question in terms of degrees of 3.
// Initial few numbers have higher degree of 3 because 
// as we go down the array, more division operation by 3 happens.

// To solve it, use pair<x, y> where x is -(degree of 3).
// This allows higher degree 3 to be in front. Those with same degree of 3 
// will automatically get sorted in lexicographical order.

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
