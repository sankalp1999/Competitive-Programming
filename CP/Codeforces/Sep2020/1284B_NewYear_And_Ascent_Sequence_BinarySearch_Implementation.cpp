#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	
	int t;
	cin >> t;
	vector<int> max_nums;
	lli res = 0;
	vector<int> v;
	int add = t;
	while(t--)
	{
		lli n;
		cin >> n;
		int curr_min, curr_max;
		curr_min = 1e6 + 1;
		curr_max = -1;
		bool ascent_is_there = false;
		int temp;
 
		
		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			if(curr_min < temp)
			{
				ascent_is_there = true;
			}
			curr_min = min(curr_min, temp);
			curr_max = max(curr_max, temp);
		}
		if(ascent_is_there)
		{
			res += 2 * add - 1 ;
			add--;
	
		}else
		{	
			max_nums.push_back(curr_max);
			v.push_back(curr_min);
		}
	}
	sort(max_nums.begin(), max_nums.end());
	for(int i = 0; i < v.size(); i++)
	{
		res += distance(upper_bound(max_nums.begin(), max_nums.end(),v[i]), max_nums.end());
	}
	cout << res << endl;
	
}