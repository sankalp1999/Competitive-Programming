#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count = 0;
	for(int i = 1; i < s.size()- 1; i++)
	{
		if(s[i-1] == 'x' && s[i] == 'x' && s[i+1] == 'x')
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
	}
	
