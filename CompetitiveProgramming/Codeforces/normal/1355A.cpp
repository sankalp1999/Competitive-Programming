#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--)
	{
		long long int a, k;
		cin >> a >> k;
		int minDigit, maxDigit;

		for(int i = 1; i < k; ++i)
		{
			long long int temp = a;
			minDigit = INT_MAX;
		    maxDigit = INT_MIN;
			while(temp)
			{
				int digit = temp%10;
				minDigit = min(minDigit, digit);
				maxDigit = max(maxDigit, digit);
				temp = temp/10;
			}
		
			if(minDigit*maxDigit == 0 )break;
			a = a + minDigit*maxDigit;

		}
		cout << a << endl;
	}
	return 0;
}