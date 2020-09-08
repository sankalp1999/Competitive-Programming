#include <iostream>
using namespace std;

int main() {
	int test ; 
	cin >> test ;
	long long int a, b, c ; 
	a = 0;
	b = 0;
	c = 0;
	while(test--)
	{
		long long int t1, t2, t3;
		cin >> t1 >> t2 >> t3 ;
		a = a + t1 ; 
		b = b + t2 ;
		c = c + t3 ;
		
	}
	if (a == 0 && b == 0 )
	{
		if (c == 0 )
		{
			cout << "YES"<< endl;
		}
	}
	else
	{
		cout << "NO" << endl ; 
	}
	
	return 0;
}