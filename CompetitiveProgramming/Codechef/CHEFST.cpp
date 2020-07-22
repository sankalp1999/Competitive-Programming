#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	long long int t ; 
	cin >> t ; 
	long long int x ;
	while(t--)
	{
		long long int n1, n2, m ;
		cin >> n1 >> n2 >> m ;
		
		cout << max({n1 + n2 - m*(m+1), n1 - n2, n2 - n1});
		cout << endl;
		
	}
	
	
	
	
}