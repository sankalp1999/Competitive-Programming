#include <iostream>
using namespace std;
#define lli long long int 
const int mod = 1000000007;
// (A - B) mod C = (A mod C - B mod C) mod C

// LOGIC : With some observation or pen and paper work, one can observe that the sequence repeats after an
// interval of 6. So, one can find answer after mod6.

// IMPLEMENTATION DETAILs
// (a-b)%mod something can be negative. We want it to be positive.
// So, if i < 0, i = i + mod;

int main() {
	lli x, y, fn;
	cin >> x >> y;
	cin >> fn;
	lli f1 = x;
	lli f2 = y;
	if(fn%6 == 1)cout << (x+mod)%mod << endl;
	else if(fn%6 == 2)cout << (y + mod)%mod << endl;
	else if(fn%6 == 3)cout << ((y%mod - x%mod)%mod + mod)%mod << endl;
	else if(fn%6 == 4)cout << (-x + mod)%mod << endl;
	else if(fn%6 == 5)cout << (-y + mod)%mod << endl;
	else if(fn%6 == 0)cout << ((x%mod - y%mod)%mod + mod)%mod << endl;
	

	return 0;
}
