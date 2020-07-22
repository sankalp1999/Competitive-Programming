#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		long long int sum = 0;
		int count = 0;
		int reserve = 0;
		while(n >0)
		{
		n += reserve;
		reserve= 0 ;
		sum = sum + (n - n%10);
		reserve += n%10;
		n = n/10;
		}
			cout << sum + reserve << endl;
		
	}
	return 0;
}