#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		char a[100];
		int arr[n][m];
		for(int i = 0 ; i < n; i++)
		{
			cin >> a;
			for(int j = 0 ; j < m; j++)
			{
				arr[i][j] = a[j] -'0';
			}
		}
	
		
		int count = 0 ;
		int ans = 0;
		for(int i = 0; i < m;i++)
		{	count = 0;
			for(int j = 0 ; j < n; j++)
			{
				if(arr[j][i] == 1)
				{
					count++;
				}
			}
				ans += ( count*(count - 1) )/2 ;
		}
		cout << ans << endl;
		
		
	}
	return 0;
}