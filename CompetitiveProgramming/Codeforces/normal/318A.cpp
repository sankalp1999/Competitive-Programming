#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int n, k ; 
	cin >> n >> k ;
	
	long long int ans; 
	if (k <= (n+ 1) /2 )
	{
		ans = 2*k - 1 ;

	}
	else
	
	{	
		ans =  (k - (n+1)/2 ) * 2 ;
	
	}
	cout << ans << endl ;
	return(0);
	
}