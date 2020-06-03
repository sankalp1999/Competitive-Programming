#include <iostream>
using namespace std;
int main()
{
	int m, n, l, r;
	cin >> m >> n >> l >> r;
	pair<int,int> p[55], q[55];
	for(int i = 0;i < m; i++)cin >> p[i].first >> p[i].second;
	for(int i = 0;i < n; i++)cin >> q[i].first >> q[i].second;
	int visited[1001]={0};
	for(int shift = l; shift <= r; shift++)
	{    
		for(int i = 0;i < n; i++)
		
		{   int a = q[i].first + shift; int b = q[i].second + shift;
			for(int j = 0; j < m ;j++)
			{
				int c = p[j].first;
				int d = p[j].second;
				if(max(a, c) <= min(b, d))
				{
					visited[shift] = 1;
				}
			}
		}
	}
	int count = 0;
	for(int i = 0;i <= 1000; i++)
	{
		if(visited[i])count++;
	}
	cout << count << endl;
	
}