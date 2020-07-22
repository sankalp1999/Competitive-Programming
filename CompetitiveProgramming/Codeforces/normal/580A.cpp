#include <cstdio>
#include  <iostream>
#include <vector>

using namespace std;
int main()
{
	long long int n ; 
	cin >> n ; 
	vector<int> v;
	while(n--){
		int temp ; 
		cin >> temp ; 
		v.push_back(temp);
		}
		int counter = 1 ;
		int max1 = 1 ;
		for(int i = 1; i < v.size();i++)
		{
			if (v[i-1] <= v[i])
			{
				counter++;
			}
			else
			{
				counter = 1 ; 
			}
			if (counter > max1)
			{
				max1 = counter;
			}
			
		}
		cout << max1 << endl ;
		return 0 ;
}