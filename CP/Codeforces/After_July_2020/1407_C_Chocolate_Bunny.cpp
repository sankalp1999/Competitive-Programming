/*
Observation: (amodb>bmoda)⇔(a<b).

Proof: if a>b, then (a mod b)< b=(b mod a). If a = b, then (a mod b)=(b mod a)=0.
Hence, a mod b > b mod a. Although, i came to this conclusion by some handwork
and not by mathematics.


Came to this solution on my own! but took around an hour
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	// 2 * n queries 
	
	int visited[n + 1] = {0};
	int i = 1;
	int j = n ;
	vector<int> res(n + 1,0);
	while(i < j)
	{
		cout << "? " << i << " " << j << endl;
		cout.flush();
		
		int query1;
		cin >> query1;
		if(query1 == -1)return 0;
		
		cout << "? " << j << " " << i << endl;
		cout.flush();
		
		int query2;
		cin >> query2;
		if(query2 == -1)return 0;
		if(query1 > query2)
		{

			visited[query1] = 1;
			res[i] = query1;
			i++;
		}
		else if(query2 > query1)
		{
			visited[query2] = 1;
			res[j] = query2;
			j--;
		}

	}

	{	int mising = 0;
		for(int k = 1; k <= n; k++)
		{
			if(visited[k] == 0)
			{
				mising = k;
				break;
			}
		}
		for(int i = 1; i < res.size();i++)
		{
			if(res[i] == 0)
			{
				res[i] = mising;
				break;
			}
		}
		
	}
	cout << "! " ;
	for(int i = 1; i <= n; i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	cout.flush();

	
	return 0;
}