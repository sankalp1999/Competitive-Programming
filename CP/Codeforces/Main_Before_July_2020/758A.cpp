#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	if(n == 1)
	{
		cout << 0 << endl;
	}
	else
	{
		int max1 = -1 ;
		for(int i = 0 ; i< n; i++)
		{
			cin >> arr[i] ;
			if(arr[i] > max1)
			{
				max1 = arr[i];	
			}
		}
	
		for(int i = 0 ; i< n ;i++)
		{
			sum = abs(max1 - arr[i]) + sum;
		}	cout << sum << endl;
		
	}

	return 0;
}