#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		unordered_set<int> s;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			s.insert(v[i]);
		}
		if(s.size() > k)
		{
			cout << -1  << endl;
			continue;
		}
		
		if(n == k)
		{	
			cout << n << endl;
			for(int i : v)
			{
				cout << i << " ";
			}
			cout << endl;
			continue;
		}
		
		// You literally don't have to insert the elements
		// In almost all of such type of questions, we 
		// are never supposed to insert/delete elements
		
		// Nothing was mentioned about to maintain the order
		// of the array and also we can add anything between 1 to n
		
		// So, we make a list of unique k numbers and just repeat that.
		
		// Mistake on my side was that i considered
		// 1.  < k to be valid but ok, i was inserting unique numbers
		// 2. I was literally making the list by inserting that is 
		// pure dumb and difficult to  do.
		
		vector<int> res;
		for(auto it = s.begin(); it != s.end(); it++)
		{
			res.push_back(*it);
		}
		while(res.size() < k)
		{
			res.push_back(1);
		}
		cout << (int)res.size() * n << endl;
		for(int i = 0; i < n; i++)
		{
			for(int i : res)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}