#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	long long int n, n2 ;
	
	cin >> n ; 
	n2 = n  ; 
	long long int min1 = 1000000001 ;
	long long int index = 0 ;  
	vector<long long int> v ; 
	while(n--)
	{
		long long int temp;
		cin >> temp ; 
		if (temp < min1 )
		{
			min1 = temp; 
			index = n2 - n ; 
			
		}
		v.push_back(temp);
	}
	long long int count = 0; 
	
	for(auto it = v.begin();it != v.end();it++)
	{
		if (count > 1 ){
			
			break ; }
		else{
			if (*it == min1)
			{
				count++;
			}
			else {continue;}
			
		}
	}
	if (count == 1 )
	{	cout << index << endl  ;
		
	}
	else
	{
		cout << "Still Rozdil\n" ; 
	}
}