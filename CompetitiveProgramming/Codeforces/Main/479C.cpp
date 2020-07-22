#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
		vector<pair<long long int,long long int>> arr;
		for (int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;

			arr.push_back({a, b});
		}
		sort(arr.begin(), arr.end());
		long long int ch = min(arr[0].first, arr[0].second);
		for (int i = 1; i < arr.size(); i++)
		{
			if(arr[i].second >= arr[i-1].second){
				ch = arr[i].second;
			}
			else
			{
				ch = arr[i].first;
			}
		
		}
		cout << ch << endl;
		// 3 1
		// 4 3
		// 5 2
		return 0;
}