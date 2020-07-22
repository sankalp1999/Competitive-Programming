#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll ;
typedef long double ld;
ll mod = 1000000007;
int main() {
	ld b ;
	ld a =  1;
	ld c ;
	ld d;
	ld n, k ;
	cin >> n >> k ; 
	b = -(2*n + 3);

	c = -(2*k - n*n - n );
	b = b;
	d = (b*b) - (4*1*(c)) ;
 
   ld ans = (-b - sqrtl(d))/(2*1) ; 
   
 
	cout << (int)(ans) << endl ;

	return 0;
}
/*
cin >> n >> k;
	ld A = 1;
	ld B = -1*(2*n+3);
	ld C = n*n + n - 2*k;
	// ld y1 = (-B + sqrtl(B*B - 4*A*C))/(2*A);
	ld y1 = (-B - sqrtl(B*B - 4*A*C))/(2*A);
	cout << (int)y1 << "\n";*/