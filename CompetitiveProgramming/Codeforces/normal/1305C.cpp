#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if(n > m)
	{
		cout << 0 << endl;
	}
	else
	{
		int sum = 1;
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = i+1 ; j < n ; j++)
			{
				
				sum = (abs( (arr[i]-arr[j]) %m )*(sum%m)) %m;
			// cout << (abs( (arr[i]-arr[j]) %m )*(sum%m)) %m << " ";
				
			}
			
		}
		cout << sum << endl;
		
		
	}
	return 0;
}