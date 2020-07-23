#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int i;
	cin >> n;
	int f1, f2;
	f1 = 0;
	f2  = 0;
	vector<int> v(n), v2(n-1), v3(n-2);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for(int i = 0 ; i < n- 1; i++)
	{
		cin >> v2[i];
	}
	for(int i = 0 ; i < n- 2; i++)
	{
		cin >> v3[i];
	}
	sort(v.begin(), v.end());
	sort(v2.begin(), v2.end());
	sort(v3.begin(), v3.end());
	for(i = 0 ; i < n - 1; i++)
	{
		if(v[i] != v2[i])
		{
			cout << v[i] << endl;
			f1 = 1;
			break;
		}
	}
	if(i == n-1 && f1 == 0)
	{
		cout << v[n-1] << endl;
	}
	i = 0;
	for(i = 0 ; i  < n - 2; i++)
	{
		if(v2[i] != v3[i])
		{
			cout << v2[i] << endl;
		
		
			f2 = 1; break;
		}
	}
	if(i == n - 2 && f2 == 0)
	{
		cout  << v2[n-2] << endl;
	}
	
	return 0;
}