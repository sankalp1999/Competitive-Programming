#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		if(n & 1)
		{
			cout << n/2 << " " << n/2 << " " << 1 << endl;
		}
		else
		{
			if(n % 4 != 0)
			{
				int half = (n / 2) - 1;
				cout << half << " " << half << " " << 2 << endl;
			}
			else
			{
				cout << n/4 << " " << n/4 << " " << n/2 << endl; 
			}
		}
	}
	return 0;
}