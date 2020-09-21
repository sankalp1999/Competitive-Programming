#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	unordered_map<int,int> m;
	long long int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(m.find((i - A[i])) != m.end())
		{
			count += m[i - A[i]]; // Main trick is to find out the key-value 
                                  // pairing using the math relation.
                                  // Also, do some observation
                                  // work by hand.
		}
		m[(i +A[i])]++;
	}
	cout << count << endl;
	return 0;
}