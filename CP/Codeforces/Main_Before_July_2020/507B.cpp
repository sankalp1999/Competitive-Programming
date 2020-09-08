#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double r, l, m, n, p;
	cin >> r >> l >> m >> n >> p;
	double d = sqrt((n-l)*(n-l) + (p-m)*(p-m) );
	cout << ceil(d/(2*r)) << endl;
	
	return 0;
}