#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> v(n + 2);
	for(int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	while(q--)
	{
		int l, r;
		cin >> l >> r;
		
        if(l == r)
        {
            cout << k - 1 << endl;
        }
		else
        {   
            long long int sum = 0;
            int temp = v[r + 1];
            v[r + 1] = k+1;
            int temp2 = v[l - 1];
            v[l - 1] = 0;
            // for (int i = l; i <= r; i++)
            // {
            //     int left = i - 1;
            //     int right = left + 2;
            //     if( abs(v[right] - v[left]) - 2 >= 0)
            //     {
            //         sum += abs(v[right] - v[left]) - 2;
            //         // cout << abs(v[right] - v[left]) - 2 << " ";
            //     }
            // }

            sum += -v[l - 1] - v[l] + v[r + 1] + v[r] - 2*(r - l + 1);
            v[r + 1] = temp;
            v[l - 1] = temp2;

            // if(v[l] > 1)
            // {
            //     sum += 1;
            // }
            // if(v[r] < k)
            // {
            //     sum += 1;
            // }

            cout << sum << endl;
        }
    }
	
}