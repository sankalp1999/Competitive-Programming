#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	lli n;
	cin >> n;
	lli arr[n+1];
	lli even[n+1];
	lli odd[n+1];
	int k, j;
	k = 1;
	j = 1;
	for(lli i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if(i % 2 == 1)
		{
			odd[k++] = arr[i];
		}
		else even[j++] = arr[i];
	}
	lli q;
	cin >> q;
	while(q--)
	{	
		lli t, m;
		cin >> t >> m;
		lli mod = 2*n;
		t = t%mod;
		lli turn = t/n;
		lli num = 0;
		if(turn == 0)
		{
			num = abs(n - t);
		}
		else if(turn == 1)
		{
			num = abs(t - n);
		}
		if(m > num)
		{
			cout << -1 << endl;
			continue;
		}
	
		if(n % 2 == 0)
		{
			if(t <= n/2)
			{
				if(m <= t)
				{
					cout << even[m] << endl;
				}
				else
				{
					cout << arr[t + m] << endl;
				}
			}
			else if(t > n/2 && t <= n)
			{
				cout << even[m + (t - n/2)] << endl;
			}
			else if(t > n && t <= (3*n)/2 )
			{
				cout << odd[m] << endl;
			}
			if(t >= 3*n/2 + 1)
			{
				int diff =  t - (3*n/2);
                if( m <= 2 * diff + 1)
                {
                    cout << arr[m] << endl;
                }
                else
				{   
				int step = (m - (2*diff + 1))  ;
                    m += step;
					cout << arr[m] << endl;
				}
			}
		}

		else if(n % 2 == 1)
		{
			
			if(t <= n/2 )
			{
				if(m <= t)
				{
					cout << even[m] << endl;
				}
				else
				{
					cout << arr[t + m] << endl;
				}
			}
			else if(t >= n/2 + 1 && t < n )
			{
              
				cout << even[m + (t - n/2 -1)] << endl;
			}
			else if(t >= n + 1 && t <= (3*n)/2 + 1)
			{
				 
				cout << odd[m] << endl;
			}
			else
			{  
				lli diff = t - ((3*n/2)  + 1);// correct
                
				if(m <= 2*diff + 1)
				{
					
					cout << arr[m] << endl;
				}
				else
				{   
					int step = (m - (2*diff + 1))  ;
                    m += step;
					cout << arr[m] << endl;
				}
			}
		}
		
	}//24 8
	return 0;
}