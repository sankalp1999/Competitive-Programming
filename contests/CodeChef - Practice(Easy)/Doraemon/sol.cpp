#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int arr[n][m];
		for(int i = 0 ; i < n ;i++)
		{
			for(int j = 0 ; j < m; j++)
			{
				cin >> arr[i][j];
			}
		}
		int count = n*m;
		vector<pair<int,int>> v;
		vector<int> v2;
		for(int i = 1; i < n-1 ; i++)
		{
			
			for(int j = 1; j < m-1 ; j++)
			{
				
				if(arr[i][j-1] == arr[i][j+1] && arr[i-1][j] == arr[i+1][j])
				{
					count++;
					v.push_back({i, j});
					v2.push_back(1);
				}
			}
		}
		
		for(int i = 0; i < v.size(); i++)
		{
		
				int a = v[i].first;
				int b = v[i].second;
			int p = 2;
			while(p<min(n,m))
			{
			if(a+p >= n || a-p < 0 || b-p < 0 || b+p >= m )
			{	
				break;
			}
			if(arr[a][b-p] == arr[a][b+p] && arr[a-p][b] == arr[a+p][b])
				{
					count++;
				    p++;
				}
			else break;
			}
		
		}
				cout << count << endl;
	}	return 0;
}
