#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	char arr[n][m];
	int visited[n][m];
	for(int i = 0 ;i < n ;i++)
	{
		for(int j = 0 ;j < m ;++j)
		{
			cin >> arr[i][j];
			visited[i][j] = 0;
		}
	}
	int count = 0;
	int prevcount = 0;

	for(int i = 0 ;i < n; i++)
	{
		for(int j = 0 ; j < m ; ++j)
		{
			int pigs = 0;
			int u,d,l,r;
			u = d = l = r = 0;
			if(arr[i][j] == 'W')
			{
				if( i - 1 >= 0)
				{
					if(arr[i-1][j] == 'P')
					{
						pigs++;
						u = 1;	
					}
				}
				if( i + 1 < n)
				{
					if(arr[i+1][j] == 'P')
					{
						pigs++;
						d = 1;
					}
				}
				if(j + 1 < m)
				{
					if(arr[i][j+1] == 'P')
					{
						pigs++;
						r = 1;
					}
				}
				if(j - 1 >= 0)
				{
					if(arr[i][j-1] == 'P')
					{
						pigs++;
						l = 1;
					}
				}
				
				if(pigs > 0)
				{	
					count++;
					if(r == 1 && (j+1) < m)
					{
						arr[i][j+1] = '.';
					}
					else if(l == 1 && j -1 >= 0)
					{
						arr[i][j-1] = '.';
					}
					else if(d == 1 && i+1<n)
					{
						arr[i+1][j] = '.';
					}
					else if(u == 1 && i-1>=0)
					{
						arr[i-1][j] = '.';
					}
				}
			}
		}
	}

	cout << count << endl;

	return 0;
}