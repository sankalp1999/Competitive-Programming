#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int total = 0;
	int s = 1;
	for(int i = 0; i < n; i++)
	{
		int a , b;
		cin >> a >> b;
		while(s + x <= a)
		{
			
			s += x;
		}
		total += a - s;
		total += b - a + 1;
		s = b+1;
		
	}
	cout << total << endl;

	return 0;
}