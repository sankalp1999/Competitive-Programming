#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n+10, 0);
	int done = 0;
	int visited[n+10];
	for(int i =0 ;i < n+10; i++)
	{
		visited[i]=0;
	}
	int m = 1;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p<=n; p++) 
    {  
        if (prime[p] == true) 
        {   
        	// cout << "Prime P" << p << endl;
            for (int i=p; i<=n; i += p) 
            {
                v[i]=m;
                prime[i] = false; 
            
            }
            m++;
        } 
    } 
  

	for(int i =2; i <= n; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}