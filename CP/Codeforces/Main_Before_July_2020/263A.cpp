#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int bin ; 
	int stor1, stor2 ;
	for(int i = 0 ;i < 5 ; i++)
	{
		for(int j = 0 ;j < 5 ; j++)
		{
			cin >> bin ;
			if (bin == 1 )
			{
				stor1 = i;
				stor2 = j;
			}
		}
	}
	int ans ;
	ans = fabs(stor1- 2)+fabs(stor2 -2);
	cout << ans << endl ; 

	
	return 0;
}