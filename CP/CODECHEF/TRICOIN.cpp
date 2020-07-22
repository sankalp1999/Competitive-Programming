#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		cout << floor((-1+sqrt(1+8*n))/2) << endl;
	}
	return 0;
}