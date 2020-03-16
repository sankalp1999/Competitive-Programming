#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// AGGCOW
// Here, we have to maximize the minimum distance 
// between the cows
// So, here we are getting a monotonic function,
// YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNN
// we need to find out the last Y from 
// all possible distances i.e x 
//   0  < x <= N 
bool f(int x, vector<int> &v, int c)
{
	int d = 1;
	int i = 0;
	int k = 1;
	int n = v.size();
	while(d != c && k < n) // add another exit condition
	{
		if(v[k] - v[i] >= x)
		{
			d++;
			i = k;
		}
 
		k++;
	}
	if(d == c)return true;
	else return false;
}
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		long long int n, c;
		cin >> n >> c;
		vector<int> v(n);
		
		for(int i = 0;i < n; i++)
		{
				cin >> v[i];
		}
		int left = 0;
		int right = int(1e9) ;
		int mid ;
		sort(v.begin(), v.end());
		while(left < right)
		{
			mid = left + (right - left)/2 + 1;
			if(f(mid, v, c) == true)
			{
				left = mid;
			}
			else{
				right = mid - 1;
			}
		}
		cout << left << endl;
 
 
	}
	
	
	
	
	return 0;
} 
