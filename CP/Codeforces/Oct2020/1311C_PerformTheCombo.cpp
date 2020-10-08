#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		string s;
		cin >> s;
		vector<int> v(m);
		for(int i = 0; i < m; i++)
		{
			cin >> v[i];
		}
		int arr[n][26] = {0};
	arr[0][s[0] - 'a']++;
	
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < 26;j++)
		{
			arr[i][j] += arr[i-1][j];
		}
		arr[i][s[i] - 'a']++;
	}
	int count[26] = {0};
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < 26;j++)
		{
			count[j] += arr[v[i] - 1][j];
		}
	}
	
	// final try
	for(char c : s)
	{
		count[c - 'a']++;
	}
	for(int i = 0; i < 26; i++)
	{
		cout << count[i] << " ";
	}
	cout << endl;

	}
	return 0;
}