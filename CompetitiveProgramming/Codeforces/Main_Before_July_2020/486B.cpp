#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int b[m][n] ;
	int a[m][n];
	int now[m][n];
	for(int i = 0;i < m ;i++){
		for(int j = 0 ; j < n ; j++)
		{
			a[i][j] = 1;
			now[i][j] = 0;
		}
	}
	int zero = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> b[i][j];
			if(b[i][j] == 0)
			{
				for(int p = 0; p < n ;p++)
				{
					a[i][p] = 0;
				}
				for(int p = 0; p < m; p++)
				{
					a[p][j] = 0;
				}
			}
		}
	}

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n ; j++)
		{
			int val = 0;
			for(int k = 0; k < n; k++)
			{
				val = val | a[i][k];
			}
			
			for(int k = 0; k < m ; k++)
			{
				val = val | a[k][j];
			}
			now[i][j] = val;
		}
	}
	for(int i = 0 ; i < m; i++)
	{
		for(int j = 0 ; j < n; j++)
		{
		if(b[i][j] != now[i][j])
		{
			cout << "NO" << endl;
			return 0;
		}
		// cout << now[i][j] << " ";
		}
		
	}
	cout << "YES" << endl;
	for(int i = 0; i < m; i++)
	{
		for(int j =0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}cout << endl;
	}

	return 0;
}