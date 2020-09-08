#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n ;
	cin >> n ; 
	stack<int> s;
	vector<int> v ;
	int count = 0 ;
	int k = 0 ; 
	while(n--)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 0; i < v.size(); i++)
	{
		if (v[i] == -1)
		{
			count++;
			if(k> 0 && count > 0)
		{	k = k - 1 ;
			count = count - 1 ;
		}	
		}
		else if ( v[i] > 0)
		{
			k = k + v[i];
		}
	}
	cout << count << endl;
	return 0;
}