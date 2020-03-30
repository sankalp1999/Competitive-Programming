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
	// if array is already sorted, then 0 operations needed
	// instead of sorting and equating (Do not do that!!!!!)
	// rather check if ascending as is required in this question
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
	// LOGIC:
	//		With some pen and paper work, one can quickly observe
	// that the last element should be smaller than the first element
	// otherwise the new sequence wouldn't be ascending.
	// e.g 1 4 5 6 7 sorted sequence
	// 5 6 7 1 4
	// first time 4 5 6 7 1
	// second time 1 4 5 6 7 
	// now, 7 is greater than 1. So, if you put 7 infront,
	// then, no longer descending order is followed.
	
	// So, at this point we check the remaining of array is 
	// ascending is not i.e from position i to 0
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
