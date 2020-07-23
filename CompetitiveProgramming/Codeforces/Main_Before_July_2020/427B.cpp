#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main()
{
	long long int  n, t, c;
	cin >> n >> t >> c ;
	vector<long long int> v ; 
	long long int count = 0 ;
	while(n--)
	{
		long long int t;
		cin >> t ;
		v.push_back(t);
		
	}
	for(int i = 0 ; i < v.size() ;i++)
	{
		for(int j = i; i + c <= v.size() && j < i + c;j++)
		{//	cout << v[j] << " ";
			if (v[j] > t)
			{	//cout << endl;
				i = i + c- 1 ;
				break;}
			
			if ( j == i + c  -1 )
			{	//cout << "yes" << endl;
				count++;
			}
		}
	//	cout << endl;
		
	}
	
	cout << count << endl;
	
}