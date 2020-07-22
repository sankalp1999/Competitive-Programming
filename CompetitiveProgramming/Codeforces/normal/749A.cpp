#include <iostream>
#include <vector>
#define push_back pb
#define long long int ll
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n%2 == 0)
	{
		cout << n/2  << endl;
		for(int i = 0 ; i < n/2; i++)
		{
			cout << 2 << " ";
		}
	}
	else
	{
	int k = n - 3;
	int t = k/2;
	cout << t+1 << endl;
	for(int i = 0 ; i < t;i++)
	{
	cout << 2 << " ";
	}
	cout << 3 << endl;
	}
	return 0;
}