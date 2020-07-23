#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	int flag = 0;
	cin >> n;
	int arr[n+1] = {0};
	int count_negative = 0 ;
	long long int sum = 0 ;
	for(int i = 0 ; i< n; i++)
	{
		cin >> arr[i];
		if(arr[i]<0)count_negative++;
		if(arr[i] == 0)flag = 1;
	}
	for(int i = 0; i < n ; i++)
	{
		if(arr[i] < 0)
		{
			sum = sum + abs(-1 - arr[i]);
		}
		else
		{
			sum = sum + abs(arr[i] - 1); // making 1 
		}
	}
	if(count_negative % 2 == 1 && flag == 0){sum = sum + 2;}
	cout << sum << endl;
	
	return 0;
}