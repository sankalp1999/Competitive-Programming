#include <iostream>
using namespace std;
typedef long long int ll;
ll c(ll a )
{
	return ((a)*(a-1))/2;
}
int main() {
	long long int n, m;
	cin >> n >> m;
	long long int r = n/m;
	cout << (r*(r-1)/2)*(m-n%m) + (n%m)*c(r+1) << " ";
	cout << c(n-m+1) << " ";
	
	return 0;
}