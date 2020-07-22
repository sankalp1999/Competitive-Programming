#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b , h;
	cin >> a >> b >> h;
	int i = 0;
	while(1)
	{
		if(i%2 == 0)
		{
			int simon = __gcd(a, h);
			if(h - simon >= 0)
			{
				h -= simon ;
			}
			else 
			
			{
			cout << 1 << endl;
			return 0;
			}
		}
		else if(i%2 == 1)
		{
		int asimon = __gcd(b, h);
				if(h - asimon >= 0)
			{
				h -= asimon ;
			}
			else 
			{
				cout << 0 << endl;
				return 0;
			}
		}
		i++;
	}
	return 0;
}