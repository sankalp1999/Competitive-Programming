#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, s, t;
	cin >> n >> s >> t;
	int p[n+1];
	for(int i = 1; i <= n ; i++)
	{
		cin >> p[i];
	}
	int c = 0;
	int j, k;
	j = p[s];
	int index = s;
	while(1)
	{
		if(index == t)
		{
			cout << c << endl;
			return 0;
		}
		if(index == s && c != 0)
		{	cout << -1 << endl;
			return 0;
			
		}
		index = p[index];
		c++;
	}
	return 0;
}