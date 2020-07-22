#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	int t;
	cin >> t;
	int arr[n-1];
	for(int i =1 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	if(t == 1){cout << "YES" << endl;}
	else
	{	
		int des = 1;
		for(int i = 1;i <= n ; cur += arr[i])
		{
			if(i == t)return 0 & cout << "YES";
		}
	}
	cout << "NO" << endl;
	return 0;
}