#include <iostream>
using namespace std;

int main() {
	
	int n, l;
	cin >> n >> l;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long int sum  = 0;
	// Since all the strips are goign to be of the same lenght
	// We want to find a strip of length x.
	// Then f(x) * x should be maximised.
	long long int res = 0;
	for(int i = l; i <= 101; i++)
	{
		sum = 0;
		for(int j = 0; j < n; j++)
		{
			sum += arr[j]/i;
		}
		sum = sum * i; // Get the area of the rectangle
		res = max(res, sum);
	}
	cout << res << endl;
	
	
	
	return 0;
}