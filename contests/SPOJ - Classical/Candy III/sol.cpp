#include <iostream>
using namespace std;
typedef long long int ll;
// explanation is 
// divisibility check but sum can overflow
// to keep in the same domain, we do mod n 
// and not 10^9 + 7
int main()
{

	long long int n;
	int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		long long int n2 = n;
		int sum = 0;
		while(n2--)
		{
			int temp;
			cin >> temp;
			sum += temp%n;
		}
		if(sum%n == 0)cout << "YES" << endl;
		else
		{
			cout << "NO" << endl;
		}
	}
	
}