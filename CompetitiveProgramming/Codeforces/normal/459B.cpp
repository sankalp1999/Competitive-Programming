#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	long long int n2 = n;
	while(n--)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
    long long int mi = 0;
	long long int ma = 0;
	
	for(int i = 0; i < v.size(); i++ )
	{
		if(v[i] == v[0])
			{mi++;}
		if(v[i] == v[v.size() - 1])
		{
			ma++;
		}
	}
	if(v[0] == v[v.size() - 1]){cout << 0 << " " << (n2*(n2-1)/2); return 0;}
	cout << v[v.size() - 1 ] - v[0] << " "  << ma*mi*1LL << endl;
	return 0;
}