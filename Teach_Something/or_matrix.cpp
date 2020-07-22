#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;


// Learning 
// Try to think a bit backwards also 
// if getting a long solution.
// I did some good logic on this. 


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
	/* In columns and rows where bij = 1
	 means that there was not even a single one
	 in ith row of a and jth row of b
	 So, assign 0 there. */
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
	// Generating the b matrix again from a
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
	// Checking the b matrix whether it is same as input
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
