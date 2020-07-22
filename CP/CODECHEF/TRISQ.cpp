#include <iostream>
using namespace std;

int main() {
	int t ; 
	cin >> t ;
	while(t--)
	{
		int k;
		cin >> k ;
		k = k / 2;
		k--;
		cout << k*(k+1)/2 << endl;
	}
	return 0;
}