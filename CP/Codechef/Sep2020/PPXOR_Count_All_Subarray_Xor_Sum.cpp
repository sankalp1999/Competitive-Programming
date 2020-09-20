#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int bit[60][2] = {0};
		for(int i = 0; i < 31; i++)
		{
			bit[i][0] = 1; // Since, we are xoring S[R-1] ^ S[R]
		}
		long long int ongoing_xor = 0;
		long long int res = 0;
		for(int i = 0; i < n; i++)
		{
			long long int temp;
			cin >> temp;
			ongoing_xor = ongoing_xor ^ temp;
			
			for(int j = 0; j < 31; j++)
			{
				long long int p = (1  << j);
				if(ongoing_xor & p)
				{
					res += p * (bit[j][0]);
				}
				else
				{
					res += p * (bit[j][1]);
				}
			}
			for(int j = 0; j < 31; j++)
			{
				long long int p = (1  << j);
				if(ongoing_xor & p)
				{
					bit[j][1]++;
				}
				else
					bit[j][0]++;
			}
			
			
		}
		cout << res << endl;
	}
	return 0;
}