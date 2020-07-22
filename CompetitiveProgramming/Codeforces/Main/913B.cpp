#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n ;
	cin >> n;
	vector<int> v(n), deg(n);
	for(int i = 1; i < n; i++)
	{
		cin >> v[i];
		v[i]--;
		deg[v[i]]++;
	}
	vector<int> son_le(n);
	for(int i = 0 ;i < n; i++)
	{
		if(deg[i] == 0)
		{
			son_le[v[i]]++; // counting the leaves
		}
		
	}
	for(int i = 0; i< n; i++)
	{
		if(deg[i] > 0 && son_le[i] < 3)
		{
			cout << "No" ;
			return 0;
		}
	}
	puts("Yes");
	return 0;
}