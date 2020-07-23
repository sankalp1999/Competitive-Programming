#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	int flag = 0;
	for(int i = 1 ; i < n; i++)
	{
		if(arr[i] < arr[i-1]) flag = 1;
	}
	if(flag == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	int first = arr[0];
	int count = 0;
	for(int i = n - 1; i > 0 ; i--)
	{
		if(arr[i] <= first)
		{
			first = arr[i];
			count++;
		}
		else
		{
			for(; i > 0 ; i--)
			{
				if(arr[i] < arr[i-1] )
				{
					cout << -1 << endl;
					return 0;
				}
			}
			cout << count << endl;
			return 0;
		}
	}
	cout << count << endl;
	return 0;
}