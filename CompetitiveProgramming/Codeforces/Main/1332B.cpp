#include <iostream>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

int main() {
	
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int> v(n, 0);
		int m  = 1;
		for(int i = 0;i < n ; ++i)
		{
			cin >> v[i];
		}
		vector<int> order;
		int done = 0;
		int minPrime[11] = {2,3,5,7,11,13,17,19,23,29,31};
		vector<int> visited(v.size(), 0);
		int ans = 0;
		int flag = 0;
		for(int i = 1; i <= 11; i++)
		{
			flag = 0;
			for(int j = 0; j < v.size(); j++)
			{
				if(v[j]%minPrime[i-1]==0 && !visited[j])
				{
					v[j]=m;
					done++;
					visited[j]=1;
					flag =1;
				}
			}
			if(done == v.size())break;
			if(flag)m++;
		}
		cout << m << endl;
		for(int i : v)
		{
			cout << i << " ";
		}
		cout << endl;
			
	}
	return 0;
}