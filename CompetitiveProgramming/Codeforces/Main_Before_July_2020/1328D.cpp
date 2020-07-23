#include <iostream>
using namespace std;

int main() {
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n ;
		int arr[n];
		// question has 1 based indexing
		// but i follow normal 0 based indexing
		int count[2000005] = {0};
		for(int i  = 0; i < n; i++)
		{
			cin >> arr[i];
			count[arr[i]]++;
		}
	int sum = 0;
	for(int i = 0 ; i < 2000005; i++)
	{
		if(count[i] > 0)
		{
			sum++;
		}
	}
	// cout << "HEre is sum : " << sum << endl;
	if(sum >= 3)sum = 3;
	cout << sum << endl;
	if(sum == 1)
	{
	for(int i = 0; i < n; i++)
		{
			cout << 1 << " ";
		}
		cout << endl;
	}	
	else if(sum == 2)
	{
		int k = 1;
		for(int i = 0; i < n-1 ; i++)
		{
			if(i%2 == 0)
			{	k =1;
				cout << k << " ";
			}
			else 
			{	k = 2;
				cout << k << " ";
			}
		}
		if(arr[0] != arr[n-1])
		{	
			cout << 2 << endl;
		}
		else cout << 1 << endl;
	}
	else
	{
		
		int c = 0;
		int k = 0;
		for(int i =0; i< n - 1 ;i++)
		{
			if(c%3==0)
			cout << c%3 + 1 << " ";
			else if(c%3==1)
			{
				cout << c%3  + 1  << " ";
			}
			else if(c%3 == 2)
			{
				cout << c%3  + 1  << " ";
			}
			c++;
		}
		if(arr[n-1] != arr[0])
		{
			if(c%3==0)cout << 2 << endl;
			else if(c%3==1)cout << 3 << endl;
			else if(c%3 ==2)cout << 2 << endl;
		}
		else
		{
			cout << c%3 << endl;
		}
			
	}
	}
	return 0;
}