#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> m;
	while(n--)
	{
		string s;
		cin >> s;
		auto it = m.find(s);
		if(m.find(s) == m.end() )
		{
			cout << "OK" << endl;
			m[s] = 1;
			// it->second = it->second + 1;
		}
		else
		{

			string s2 = (s+ (to_string)( it->second ));
			m[s]++;
			cout << s2 << endl;
			m[s2] = 1;
		}
	}
	return 0;
}