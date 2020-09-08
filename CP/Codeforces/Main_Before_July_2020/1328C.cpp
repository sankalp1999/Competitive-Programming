#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define mod 1000000007ll
 
int main()
{
 
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        string b = "";
        string c = "";
        int flag = 0;
        
        
        for (int i = 0; i < n ; i++)
        {
          if(a[i]=='0')
          {
          	b += '0';
          	c += '0';
          }
          else if(a[i] == '2')
          {
          	if(flag ==0)
          	{b += '1';
        	c += '1';
          	}
        	else if(flag == 1)
        	{
        		b += '0';
        		c += '2';
        	}
          }
          else if(a[i] == '1')
          {
          	// in this case one of the string will become smaller
          	// now, we start minimizing the larger one
        	if(!flag)
        	{
        		flag = 1;
    			c += '0';
        		b += '1';
        	}
        	else
        	{
        		c += '1';
        		b += '0';
        	}
        
          }
        }
        cout << b << endl;
        cout << c << endl;
    }
 
    return 0;
}