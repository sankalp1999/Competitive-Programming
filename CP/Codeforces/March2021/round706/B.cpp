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
   int t;
   cin >> t;
   while(t--)
   {
       int n, k;
       cin >> n >> k;
       vector<int> v(n);
       unordered_set<int> s;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           s.insert(v[i]);
       }
       sort(v.begin(), v.end());
       int mex = 0;
       int flag = 0;
       if(k == 0)
       {
           cout << n << endl;
           continue;
       }
       for (int i = 0; i < n && v[0] == 0; i++)
       {
           if (i == v[i])
           {
               continue;
           }
           else
           {
               flag = 1;
               mex = v[i - 1] + 1;
               break;
           }
        }
        if(flag == 0 && v[0] == 0)
            mex = v.back() + 1;
        // cout << mex << endl;
        if (mex >= v.back())
        {
            cout << n + k << endl;
        }
        else
        {
            int res = (v.back() + mex + 1) / 2;
            if(s.find(res) != s.end())
            {
                cout << n << endl;
            }
            else
                cout << n + 1 << endl;
        }
    }
       
}
