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
		int best = -1;
		for (int i = 0; i < arr.size(); i++)
		{
			if(best <= arr[i].second){
				best = arr[i].second;
			}
			else
			{
				best = arr[i].first;
			}
				}
				cout << best << endl;
				return 0;
}