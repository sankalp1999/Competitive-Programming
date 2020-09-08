#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007ll
#define size 1000001
 
int main()
{
 
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
    	int a, b ;
    	cin >> a >> b;
    	if(a%b==0)cout << 0 << endl;
    	else
    	{
    		cout << b - (a%b) << endl; 
    	}
    }
  
    
	return 0;
}