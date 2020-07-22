#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int a[n + 1];
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	if(n == 1)
	{
		cout << 1 << endl;
		return 0;
	}
	int res = 2;
	int final = 2;
	for(int i =2 ; i < n; i++)
	{
		if(a[i] == a[i-1] + a[i-2])
		{
			res++;
			final = max(final, res);
		}
		else
		{
			res = 2;
		}
	}
	cout << final << endl;
	return 0;
}