#include <iostream>
using namespace std;

int main() {
	int n ;
	cin >> n ;
	while(n--)
	{
	long long int a, b, c ; 
	cin >> a >> b >> c ;
	long long int sum = a + b + c ;
	cout << sum/2 << endl ; 
	}
	return 0;
}