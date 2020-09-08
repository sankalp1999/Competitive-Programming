#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;

typedef long long int ll ; 

int main()
{
	
	int n, k ; 
	cin >> n >> k ;
	ll n2 =  ceil(n/2.0);

//	int i  = 0 ; 
	vector<int> count(k+1,0);
	vector<int> tv(k+1,0);
	for(ll i = 1  ; i <= n ; i++ )
	{
		ll temp ; 
		cin >> temp ; 
		count[temp] += 1 ;
		tv[temp] += 1 ;
	}

	int i = 0 ;
	int count1 = 0 ;
	sort(count.begin(), count.end(), greater<int>());

	while(n2--)
	{	
		
		if (count[i] > 0 && count[i] != 1 )
		{
			
			count[i] -= 2 ;
			count1 += 2 ;
		}
		else if (count[i] == 1 )
		{
			count1 += 1 ;
		}
		 if ((count[i] == 1  || count[i] == 0 ) && count[i+1] != 0)
		{
			i++;
		}
	}
	cout << count1 << endl ; 
	
	
	
	
	
	
	
	
	
	return 0 ;
}