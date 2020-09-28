#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		int r = 0;
		int p = 0;
		int s = 0;
		for(char c : str)
		{
			if(c=='R')r++;
			else if(c=='P')p++;
			else if(c=='S')s++;
		}
		vector<pair<int,char>> v;
		v.push_back({r,'R'});
		v.push_back({p,'P'});
		v.push_back({s,'S'});
		
		sort(v.begin(),v.end());
		reverse(v.begin(), v.end());
		int n = str.size();
		unordered_map<char,char> printer;
		printer['R'] = 'P';
		printer['P'] = 'S';
		printer['S'] = 'R';
		if(v[0].first>=n/3)
		{
			int n = str.size();
			while(n--)
			{
				cout << printer[v[0].second];
			}
			
		}
		cout << endl;
		
	}
	return 0;
}
