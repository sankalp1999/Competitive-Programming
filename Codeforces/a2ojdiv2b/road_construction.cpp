#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int visited[1001] = {0};
	for(int i = 1; i <= 1000 ; ++i)
	{
		visited[i] = 0;
	}
	while(m--)
	{
		int a, b;
		cin >> a >> b;
		visited[a] = 1;
		visited[b] = 1;
	}
	int yuss;
	for(int i = 1 ;i <= 1000; ++i)
	{
		if(visited[i] == 0)
		{
			yuss = i;
			break;
		}
	}
	cout << n - 1 << endl;
	for(int i =1 ; i <= n ; ++i)
	{
			if(i == yuss)continue;
			else
			{
				cout << i << " " << yuss << endl;
			}
	}	
	


	return 0;
}
