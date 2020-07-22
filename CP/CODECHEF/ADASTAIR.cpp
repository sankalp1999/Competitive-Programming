#include <iostream>
using namespace std;

int main() {
	int t ; 
	cin >> t ;
	while(t--)
	{
		int k, n ; 
		cin >> n >> k ;
		int arr[n+1];
		arr[0] = 0 ;
		for(int i = 1 ; i<= n ; i++)
		{
			cin >> arr[i];
		}
		int count =  0 ;
		for(int i = 1;i <= n ; i++)
		{
			if(arr[i] - arr[i-1] > k)
			{
			count = count + ((arr[i]- arr[i-1])- 1)/k ;
			}
		
		}
		cout << count << endl;
	}
	return 0;
}