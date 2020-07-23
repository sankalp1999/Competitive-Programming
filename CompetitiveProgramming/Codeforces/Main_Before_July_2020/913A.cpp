#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	float s = log2(m);
	if(s >= n)
	{
		cout << m % (int)pow(2,n) << endl;
	}
	else
	{
		cout << m << endl;
	}
	return 0;
}