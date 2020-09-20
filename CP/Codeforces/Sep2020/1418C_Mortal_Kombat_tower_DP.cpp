#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it : v)
	{
		cin >> it;
	}
	sort(v.begin(), v.end());
	int count = 0;
	int visited[n] = {0};
	for(int i = 0; i < n; i++)
	{
		if(visited[i])continue;
		count++;
		int prev = v[i];
		visited[i] = 1;
		
		for(int j = i + 1; j < n; j++)
		{
			if(prev < v[j] && !visited[j])
			{
				prev = v[j];
				visited[j] = 1;
			}
			else
			{
				continue;
			}
		}

	}
	cout << count << endl;
	return 0;
}