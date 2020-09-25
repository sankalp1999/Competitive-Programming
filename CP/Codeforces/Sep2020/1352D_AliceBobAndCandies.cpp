#include <bits/stdc++.h>
using namespace std;

typedef long long int lli ;
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >>n ;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		lli ta, tb;
		ta = tb = 0;
		lli preva, prevb;
		preva = 0;
		prevb = 0;
		
		int left = 1;
		int right = n - 1;
		
		int t = 1;
		int moves = 1;
		ta += v[0];
		preva = v[0];
		while( left <= right )
		{	
			
			if(t == 0)
			{
				long long int temp = 0;
				while(temp <= prevb && left <= right)
				{
					temp += v[left];
					left++;
				}
				// Actually, the left/right variable point to
				// some entry in v but that candy is not eaten. Hence, 
				// left <= right 
				// should be done.
				preva = temp;
				ta += temp;
				t = 1;
			}
			else
			{
				long long int temp = 0;
				while(temp <= preva && right >= left)
				{
					temp += v[right];
					right--;
				}
				prevb = temp;
				tb += temp;
				t = 0;
			}
			moves++;
		}
		cout << moves << " " << ta << " " << tb << endl;
		
	}
	return 0;
}