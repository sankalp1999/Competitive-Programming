#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		// in 2 * k sized window, no ones should be there
		string s;
		cin >> s;
		vector<int> v;
		int count = 0;
		
		for(char c : s)
		{
			v.push_back(c - '0');
		}
		int lo = 0;
		for(int i = 0; i <= min(n-1,k); i++)
		{
			if(v[i] == 1)lo++;
		}
		if(lo == 0)
		{
			v[0] = 1;
			count++;
		}
		lo = 0;
		for(int i = n - 1; i >= max(0,n - 1 - k); i--)
		{
			if(v[i] == 1)lo++;
		}
		if(lo == 0)
		{
			v[n-1]=1;
			count++;
		}
		
		int seg = (2 * k) + 1 ;
		int total = 0;
		for(int i = 0; i < n; i++)
		{
			total += v[i];
			if(i  + 1 >= seg  )// 0 based indexing
			{
				if(total == 0)
				{
					count++;
					v[i-k]=1;
					total++;
				}
				if(v[i-seg + 1] == 1)
				{
					total--;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}