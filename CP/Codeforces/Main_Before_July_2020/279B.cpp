#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	// Need to find a subsequence whose sum is less than 5 
	// and largest amount of element
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i =0 ;i < n; ++i)
	{
		cin >> arr[i];
	}
	int right = 0;
	int sum = arr[0];
	int left = 0;
	int i = 1;
	int l =  1;
	int ml = 0;
	if(n == 1)
	{
		if(arr[0] > k)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
		return 0;
	}
	while(i < n)
	{
		sum += arr[i];
		if(sum > k)
		{
			sum -= arr[left];
			left++;
			l--;
			sum -= arr[i];
		}
		else
		{
			i++;
			l++;
			ml = max(ml, l);
		}
	}
	cout << ml  << endl;
	
	
}