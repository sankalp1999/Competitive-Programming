#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n"
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n; 
		cin >> n;
		bool queen[n+1] = {false}  ; // for queens
		bool king[n+1] = {false}  ; // for kings
		for(int i = 1; i <= n; i++)
		{
		int k; 
		cin >> k;
		while(k--)
		{
			int kg;
			cin >> kg;
			if(!queen[i] && !king[kg])
			{
				queen[i]=true;
				king[kg]=true;
			}
		}
		}
		int f= 0;
		for(int i = 1; i <= n; i++)
		{
		
			if(!queen[i])
			{
				for(int j = 1; j <= n ; j++)
				{
					if(!king[j])
					{
						cout << "IMPROVE" << endl;
						cout << i << " " << j << endl;
						f=1;
						break;
					}
				}
				if(f==1)break;
			}
		}
		if(f==0)
		{
			cout << "OPTIMAL" << endl;
		}
		
		
	
		
	}
	return 0;
}
