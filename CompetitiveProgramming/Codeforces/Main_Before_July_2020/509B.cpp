#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int arr[n+1];
	int a = INT_MIN;
	int b = INT_MAX;
	for(int i = 0 ;i < n; i++)
	{
		cin >> arr[i];
		a = max(a, arr[i]);
		b = min(b , arr[i]);
	}
	
	if( b + k < a)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
		
		for(int i =0 ;i < n; i++)
		{
			int p = 1;
			for(int j = 0; j < b; j++)
			{
				cout << 1 << " ";
			}
			for(int j = 0; j < arr[i] - b; j++)
			{
				cout << p << " ";
				p++;
			}
			
			cout << endl;
		}
	}
	return 0;
}