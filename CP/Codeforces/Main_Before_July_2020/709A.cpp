#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, b, d;
	cin >> n >> b >> d;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int sumd = 0;
	int count = 0 ;
	for(int i =0 ; i < v.size(); i++)
	{
		if(v[i] <= b)
		{
			sumd += v[i];
		}
		if(sumd > d)
		{
			count++;
			sumd = 0;
		}
	}
	cout << count << endl;
	return 0;
}