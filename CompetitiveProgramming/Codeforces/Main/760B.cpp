#include <iostream>
using namespace std;
 
int n, m, k;
int last = 0;

long long int calc(long long int n, long long int rem)
{
	if(n == 0)return 0;
	if(n >= rem)
	{
		return (rem)*(rem + 1 )/2 + (n-rem);
		// till rem, distribute 
		// for rest i.e n-rem, give one each
		
	}
	long long int hi = rem;
	long long int lo = rem - n + 1;
	return hi*(hi+1)/2 - lo*(lo-1)/2;
	// to include lo also. Summation only till lo
	
}

int main() {
	// your code goes here
	cin >> n >> m >> k;
	if( m == n)
	{
		cout << 1 << endl;
		return 0;
	}
	int low, high, mid;
	low = 2;
	high = m - (n-1); // He will leave only one for rest of the people
	while(low<=high)
	{
		mid = low + (high - low)/2 ;
		if(calc(k-1, mid-1) + mid + calc(n-k, mid-1) <= m)
		{
			last = max(last, mid);
			low = mid + 1;			
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << last << endl;
	return 0;
}