#include <iostream>
using namespace std;

int main() {
	int a, b ;
	cin >> a >> b ; 
	int width = 0 ;
	int m1 = a, m2 = b ; 
	int  count = 0 ; 
	while(m1 <= m2 )
	{
		m1 *= 3;
		m2 *= 2 ;
		count++;
	}
	cout << count << endl;
	return 0;
}