#include <iostream>
using namespace std;
typedef long long int ll ;
int main() {
	long long int test;
	cin >> test; 
	 
	while(test--)
	{
			ll no;
			int flag = 1 ;
			ll c = 0 ;
			cin >> no;
			while(no != 1 )
			{
			if (no % 5 == 0)
			{
				no = (4*no)/5;
				c++;
			}
			else if (no % 3 == 0)
			{
				no = (2*no)/3 ;
				c++;
			}
			else if (no % 2 == 0)
			{
				no = no/2 ;
				c++;
			}
			else if ( no != 1 )
			{
				cout << -1 << endl ;
				flag = 0 ;
				break;
			}
			}
			if (flag == 1 ){
			cout << c << endl ;
			}
	}
	return 0;
}