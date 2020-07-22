#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		int a = x + y;
		int b = y + z;
		int c = z + x;
		if(a == z || b == x || c==y)cout << "yes" << endl;
		else	cout << "no" << endl;
	}
	return 0;
}