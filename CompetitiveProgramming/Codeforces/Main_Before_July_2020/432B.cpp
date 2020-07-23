#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int home[100001] = {0};
	int away[100001] = {0};
	vector<pair<int,int>> v;
	int n2 = n;
	for(int i = 0 ; i < n; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		v.push_back({t1, t2});
		home[t1]++;
		away[t2]++;
	}
	pair<int,int> c;
	for(int i = 0 ;i < v.size(); i++)
	{
		c.first = n - 1;
		c.second = n -1;
		c.first += (home[v[i].second] );
		c.second -= (home[v[i].second]);
		cout << c.first << " " << c.second << endl;
	}
	return 0;
}