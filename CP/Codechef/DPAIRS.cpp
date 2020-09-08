#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>> v ;
	for(int i = 0 ; i < n ;i++)
	{
		int temp;
		cin >> temp;
		v.push_back({temp, i});
	}
	vector<pair<int,int>> v2;
		for(int i = 0 ; i < m ;i++)
	{
		int temp;
		cin >> temp;
		v2.push_back({temp, i});
	}
	sort(v.begin(), v.end());
	sort(v2.begin(), v2.end());
	// reverse(v2.begin(), v2.end());

	int min1 = min(n, m);
	int max1 = max(n,m);
	int count = 0;
	int k = 0;
	int flag = 0;
	for(int i = 0; i < m; i++)
	{
		cout << v[0].second << " " << v2[i].second << endl;
	}
	for(int i = 1; i < n  ; i++)
	{
		cout <<  v[i].second << " " << v2[m-1].second << endl;
	}

	
		
	
	
	return 0;
}