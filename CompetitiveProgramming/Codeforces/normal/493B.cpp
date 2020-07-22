#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long long int rs1, rs2;
	rs1 = 0;
	rs2 = 0;
	int last = 0;
	vector<int> pos;
	vector<int> neg;
	while(n--)
	{
	
		int p;
		cin >> p;
		if(p > 0)
		{
			pos.push_back(p);
			rs1 += p;
		}
		else if(p < 0)
		{
			neg.push_back(abs(p));
			rs2 += abs(p);
		}
		last = p;
	}
	if(rs1 != rs2)
	{
	if(rs1 > rs2)cout << "first" << endl;
	else cout << "second" << endl;
	}
	else
	{
		if(pos == neg)
		{
			if(last > 0) cout << "first" << endl;
			else cout << "second" << endl;
		}
		else
		{	int i;
			for(i = 0;i < pos.size() && i < neg.size(); i++)
			{
				if(pos[i] > neg[i])
				{
					cout << "first" << endl;
					return 0;
				}
				else if(pos[i] < neg[i])
				{
					cout << "second" << endl;
					return 0;					
				}
			}
			if(i < max(pos.size(), neg.size()) )
			{
				if(i < pos.size())cout << "first" << endl;
				else cout << "second" << endl;
			}
		}
	
	}
}