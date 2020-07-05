#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map<string, pair<string, string>> strings;
	while(m--)
	{
		string a, b;
		cin >> a >> b;
		strings[a] = {a,b};
	}
	for(int i = 0; i < n ; i++)
	{
		string t;
		cin >> t;
		pair<string, string> a = strings[t];
		if(a.first.size() <= a.second.size()) cout << a.first << " ";
		else cout << a.second << " ";
	}
	return 0;
}
