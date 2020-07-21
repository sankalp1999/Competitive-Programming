#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    if(n == 0)cout << 0 << endl;
	    else cout << log2((n & ~(n - 1))) + 1 << endl; // This line.
	}
	return 0;
}
