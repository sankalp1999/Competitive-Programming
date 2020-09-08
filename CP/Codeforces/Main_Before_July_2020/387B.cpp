#include <iostream>
using namespace std;

int main() {
	int n, m ;
	cin >> n >> m;
	int replace[n];
	int set[m];
	for(int i = 0; i < n; ++i)
	{
		cin >> replace[i];
	}
	for(int i = 0; i < m; ++i)
	{
		cin >> set[i];
	}
	int count = n;
	int k = m-1;
	for(int i = n - 1; i >=0; i--)
	{
		if(k >= 0 && set[k] >= replace[i])
		{
			if(count == 0)break;
			count--;
			k--;
		} 
	
	}
	cout << count << endl;
	return 0;
}