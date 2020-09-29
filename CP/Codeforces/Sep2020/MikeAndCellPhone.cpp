#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	unordered_map<int,vector<int>> m;
	// left, right, up, down
	vector<vector<int>> v;
	v.push_back({1,2,3});
	v.push_back({4,5,6});
	v.push_back({7,8,9});
	v.push_back({-1,0,-1});
	int count[] = {0,0,0,0};
	for(char c : s)
	{
		int num = c - '0';
		for(int i = 0; i < 4; i++)
		{
			bool l,r,d,u;
			l = r = d = u = false;     
			for(int j = 0; j < 3; j++)
			{
				if(v[i][j] == num)
				{
					if(i-1>=0 && v[i][j] != -1)
					{
						u=true;
					}
					if(i+1<4 && v[i+1][j] != -1) // this means this is unique number
					{
						d=true;
					}
		
					if(j-1>=0 && v[i][j-1] != -1)
					{
						l = true;
					}
					if(j+1<3 && v[i][j+1] != -1) // this means this is unique number
					{
						r=true;
					}
				}
			}
                if(u)count[0]++;
				if(d)count[1]++;
				if(l)count[2]++;
				if(r)count[3]++;
		}
	}
	for(int i = 0; i < 4; i++)
	{
        // cout << count[i] << " ";
        if (count[i] == s.size())
        {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}