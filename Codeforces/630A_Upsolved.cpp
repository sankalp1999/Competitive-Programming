#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	   int a, b, c, d;
	   int x, y, x1, y1, x2, y2;
	   cin >> a >> b >> c >> d;
	   cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	   // a is left
	   // b is right

	   if( (x1 - x2 == 0) && (a + b >= 1))
	   {
	   	cout << "NO" << endl;
	   	continue;
	   }
	   if((y1 - y2 == 0) && (c + d >= 1))
	   {
	   	cout << "NO" << endl;
	   	continue;
	   }
	   if(x1 <= b - a + x && b -a + x <= x2 )
	   {
			
			if(y1 <= d -c + y && d -c + y <= y2 )
			{
				cout << "YES" << endl;
				continue;
			}
	   }
	   cout << "NO" << endl;
	   
		
	}
	return 0;
}
