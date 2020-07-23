#include <iostream>
using namespace std;


int main()
{	long long int mod =  1000000007; 
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		long long int n2 = n;
		long long int sum = 0;
		while(n2--)
		{
			long long int temp;
			cin >> temp;
			sum = ((sum%n) + (temp%n))%n;
		}
		if(sum%n == 0){cout << "YES" << endl << endl;}
		else
		{
			cout << "NO" << endl << endl;
		}
	}
	return 0;
	
}