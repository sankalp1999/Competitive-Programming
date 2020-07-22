#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	string t(s);
	reverse(t.begin(), t.end());
	if(s == t)
	{
		cout << "First" << endl;
		return 0;
	}
	int count[26] = {0};

	if(s.size() == 1)
	{
		cout << "First" << endl;
		return 0;
	}
	else if(s.size() == 2)
	{
		if(s[0] == s[1])
		{
			cout << "First" << endl;
		}
		else
		{
			cout << "Second" << endl;
		}
		return 0;
	}
	for(char c : s)
	{
		count[c - 'a']++;
	}
	vector<int> v;
	for(int i = 0; i < 26; i++)
	{
		if(count[i] & 1)
			v.push_back(count[i]);
	}
	
	if(v.size() == 0) // no odd, then you need to exactly remove one element
	{
		cout << "First" << endl;
		return 0;
	}
	int count1 = v.size() - 1;
	if(count1%2 == 0)
	{
		cout << "First" << endl;
	}
	else
	{
		cout << "Second" << endl;
	}
	
	
	return 0;
}