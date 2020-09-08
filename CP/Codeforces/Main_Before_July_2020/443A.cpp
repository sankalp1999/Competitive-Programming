#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	vector<char> v(1000);
	for(int i = 0 ; i < 1000; i++)
	{
		cin >> v[i];
	}
	int count[26] = {0};
	
	for(int i = 0 ; v[i] != '}'; i++)
	{
		if(isalpha(v[i]))
		{
			count[v[i] - 'a']++;
		}
		
	}
	
	int ans = 0;
	for(int i = 0; i < 26;i++)
	{
		if(count[i] > 0)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}