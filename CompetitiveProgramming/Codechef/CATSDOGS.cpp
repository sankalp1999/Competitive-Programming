#include <iostream>
using namespace std;

int main() {
	unsigned long long int n ;
	cin >> n  ; 
	while(n--)
	{
		unsigned long long int a, b, c ; 
		cin >> a >> b >> c ; 
	 	unsigned long long int max = (a+b)*4;
		unsigned long long int min = b*4;
		if (2*b < a)
		{
		    min = 4*(a-b);
		}
		
	 if (a == 0 && b == 0)
		{
			if (c == 0)
			{
				cout << "yes" << endl ;
			}
			else 
			{
				cout << "no" << endl;
			}
		}
	else if (c >= min && c <= max)
		{
			if (c%4 == 0 )
			{
				cout << "yes" << endl ;
			}
			else 
			{
				cout << "no" << endl ; 
			}
		}	
		else
		{
			cout << "no" << endl;
		}
		
	}
	return 0;
}