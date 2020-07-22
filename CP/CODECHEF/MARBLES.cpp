#include <iostream>
using namespace std;
long long int C(int n, int k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
    {    
    	res = res * (n - k + i) / i;
    }
    return (long long )(res + 0.01);
}
int main() {

	long long int t;
	cin >> t;
	while(t--)
	{	long long int n, k;
		cin >> n >> k;
		cout << C(n-1,k-1) << endl;
	}
	
	
}
