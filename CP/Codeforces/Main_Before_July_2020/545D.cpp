#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n] = {0};
	for(int i =0 ;i < n; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	int ans = 0;
	sort(arr, arr+n);
	for(int i =0 ; i < n;i++)
	{
		
		if(arr[i] >= sum)
		{
			sum += arr[i];
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}