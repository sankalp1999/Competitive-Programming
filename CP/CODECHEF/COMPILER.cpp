#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll n=s.length(),c1=0,ans=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='<')
			c1++;
			else
			{
				c1--;
				if(c1==0)
				ans=max(ans,i+1);
				else if(c1<0)
				break;
			}
		}
		cout<<ans<<endl;
	}
	return(0);
}