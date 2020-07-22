#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i< n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int count  = 0;
	for(int i = 1; i < n - 1 ; i++)
	{
		if(v[i] > v[i-1] && v[i] < v[i+1])
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}