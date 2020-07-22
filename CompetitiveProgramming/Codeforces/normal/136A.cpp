#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n ;
	cin >> n;
	vector<int> v(n+1);
	vector<int> v2(n+1);
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> v[i];
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		v2[v[i]] = i;
	}
	for(int i = 1; i<= n ; i++)
	{
		cout <<v2[i] << " ";
	}
	return 0;
}