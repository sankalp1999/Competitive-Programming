#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int n, d ; 
	cin >> n >> d ;
	long long int count = 0 ; 
	vector<long long int> v ; 
	long long int n2  = n ;
	while(n--)
	{
		long long int temp ; 
		cin >> temp ; 
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	
	for(long long int i = 0; i  <  n2;)
	{	
		if ( ((i+1) < n2) && v[i+1] - v[i] <= d)
		{
		
			i = i + 2 ;
			count++;
		}
		else
		{
			i++;
		}
	}
	cout << count ;
	return 0;
}