#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long int ll;
int pos = -1 ;
int bs(vector<long long int> v, int diff)
{
	int low = 0;
	int high = v.size() - 1;
	int mid = (high-low)/2 +low ;
	int ans = -1;
	
	while(low < high)
	{
		mid = (high-low)/2 +low ;
		if(v[mid] > diff)
		{
			high = mid - 1;
		}
		else if(v[mid] <= diff)
		{
			ans = v[mid];
			pos = mid;
			low = mid + 1;
		}

	}

	return ans;
}
int main() {
	
	vector<long long int> v;
	for(int i = 1;  (i*(i+1)/2) < pow(10, 9) ; i++)
	{
		v.push_back((i*(i+1)/2));
	}
	ll n;
	cin >> n;
	
	while(n--)
	{
        ll a, b;
        cin >> a >> b;
        int diff;
        if(a == b)
        {
        cout << 0 << endl;
        continue;
        }
    	int c;

		int i = 1;
		while(1)
		{
			if((i*(i+1)/2) >= abs(a-b) && ((i*(i+1)/2)  - abs(a-b))%2 == 0)
			{
				cout << i << endl;
				break;
			}
			else
			{
				i++;
			}
		}
	
		}
   
	


	return 0;
}