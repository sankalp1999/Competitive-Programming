#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double pi = 3.1415926536;
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	sort(arr, arr + n);
	double res = 0;
	for(int i = 0; i < n; ++i)
	{
		if(i%2==0)res+=arr[i]*arr[i];
		else res -= arr[i]*arr[i];
	}
	cout << fixed << setprecision(4) << abs(res*acos(-1)) << endl;
	
	
	return 0;
}