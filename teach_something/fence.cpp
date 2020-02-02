// Example program
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for(int i = 0 ;i < n; i++)
    {
       cin >> v[i];
    }
	vector<int> prefix;
	prefix.push_back(v[0]);
	for(int i = 1;i < n; i++)
	{
		prefix.push_back(v[i] + prefix[i-1]);
	}
	int index = 0;
	int minsum  = (int)1e9;
	for(int i =0; i < n-k; i++)
	{
		int diff = prefix[i+k-1] - prefix[i-1];
		if(diff < minsum)
		{
			minsum = diff;
		
			index = i; 
		}
	}
 
	cout << index + 1<< endl;
}