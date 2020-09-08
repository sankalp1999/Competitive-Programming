#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std ;
int main()
{
	int a, b; 
	
	cin >> a >> b;
	int arr[a];
	for(int i = 0  ; i < a; i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+a);
	
	long long int result = 0 ; 
	for(int i = 0 ; i < b ; i++)
	
	{
		if (arr[i] <= 0 )
		{
			result = result + fabs(arr[i]);
		}
		else
		{
			continue;
		}
	}
	cout << result << endl;
	return(0);
	
	
	
	
}