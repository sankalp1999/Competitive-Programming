#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define gcd __gcd
const double PI = 3.141592653589793238460;

using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   vector<int> v(n);
   lli sum = 0;
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
       sum += v[i];
   }

    if(sum % 2 == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    lli m = (sum / 2) ;

    vector<lli> dp(m + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = m ; j >= 0; j--)
        {
            if(j - v[i] >= 0)
            {
                dp[j] = dp[j - v[i]] | dp[j];
            }
            else
                dp[j] |= dp[j];
        }
    }
    if(dp[m])
    {
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i] & 1)
            {
                cout << 1 << endl;
                cout << i+1 << endl;
                return 0;
            }
        }
        
       // All are even
        int flag = 0;
        while(!flag)
        {
            for (int i = 0; i < n ;i++)
            {
                v[i] = v[i] / 2;
                if(v[i] & 1)
                {
                    cout << 1 << endl;
                    cout << i+1 << endl;
                    return 0;
                }
            }
        }
    }
    else
        cout << 0 << endl;
}