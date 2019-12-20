#include <bits/stdc++.h>
using namespace std;
map <string , int > flag;
string a[110];
int n,t;

void change(int x)
{
	flag[a[x]]--;
	for(int i=0;i<10;++i)
	{
		a[x][0]=i+'0';
		if(!flag[a[x]])
		{
			flag[a[x]]++;
			return;
		}
	}
}

int main()
{	cin>>t;
	while(t--)
	{
		int ans=0;
		flag.clear();
		cin>>n;
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
			flag[a[i]]++;
		}
		for(int i=1;i<=n;++i)
			if(flag[a[i]]>=2)
				change(i),++ans;
		cout<<ans<<endl;
		for(int i=1;i<=n;++i)
			cout<<a[i]<<endl;
	}
    return 0;
}
