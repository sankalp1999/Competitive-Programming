#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n ; 
	cin >> n ; 
	while(n--)
	{
	int m, x, y ;
	cin >> m >> x >> y ;
	vector<int> v; 
	int arr[101] = {0};
	for(int i = 0 ; i < m ; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 0 ; i < v.size(); i++)
	{
		int min1, max1 ;
		min1 = v[i]- x*y ;
		if(min1 < 1)
		{
			min1 = 1 ; 
		}
		max1 = v[i] + x*y ; 
		if(max1 > 100)
		{
			max1 = 100;
		}
		for(int i = min1; i <= max1; i++)
		{
			arr[i] = 1 ;
		}
	//	cout << min1 << " min " << max1 << " max " << endl;
	}
	int count = 0 ; 
	for(int i = 1; i <= 100; i++)
	{
		if(arr[i] == 0 )
		{
			count++;
		}
	}
	cout << count << endl;
	

	}		
	return 0;
		
	}