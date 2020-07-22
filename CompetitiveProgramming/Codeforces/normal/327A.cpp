#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n ;
	int arr[n];
	int arr2[n] ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
	
	for(int i = 0 ; i < n ; i++)
	{
		arr2[i] = arr[i];
	}
			int max1 = 0 ;
			int count = 0 ; 
			int j ;
		for(int i = 0 ; i < n ; i++)
		{
			
			for( j = 0 ; j < n ; j++)
			{   count = 0 ; 
			for(int k = i ; k <= j; k++)
				{if(arr[i] == 0 ){arr[i] = 1;}
				else if(arr[i] == 1){arr[i] = 0;}
				}
			for(int k = i ; k <= j ;k++)
			{
				if(arr[i] == 1){count++;}
			}
			if(count > max1){max1 = count;}
			
			for(int i = 0 ; i < n ; i++)
			{
			arr[i] = arr2[i];
			}
		}
		
		}
		cout << max1 << endl;
	
	return 0;
}