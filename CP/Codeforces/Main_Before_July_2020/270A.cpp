#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		
		int k;
		cin >> k;
		// cout << n << endl;
		int flag = 0;
			
		for(int i = 3; i <= 360; i++)
		{
			int a = (i - 2) * 180.0;
			a = (a/i);
			// cout << a << endl;
			// cout << a << endl;
			if(k == a)
			{
				flag = 1;
				cout << "YES" << endl;
				break;
			}
				
		}
		if(flag == 0)
			cout << "NO" << endl;
	}	
	return 0;
}