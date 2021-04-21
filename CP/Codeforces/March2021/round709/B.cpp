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
       int n;
       cin >> n;
       if(n == 1)
       {
           cout << 0 << endl;
           continue;
       }

       vector<int> v(n);
       lli max_ele = -1;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           max_ele = max(max_ele, v[i]);
       }

       int equal = 0;
       for (int i = 0; i < n - 1; i++)
       {
           if(v[i] != v[i + 1])
           {
               equal = 1;
               break;
           }
       }

        if(equal == 0)
        {
            cout << 0 << endl;
            continue;
        }
   

        int c = abs(v[1] - v[0]);
       lli limit = INT_MAX;
       int flag = 0;
       for (int i = 1; i < n; i++)
       {
           lli curr = v[i - 1] + c;
           if(v[i - 1] < v[i])
           {
               if(curr == v[i])
               {
                   max_ele = max(max_ele, v[i] + 1LL);
               }
               else if(curr <  v[i])
               {
                   flag = 1;
                   break;
               }
               else if(curr > v[i])
               {
                   limit = min(limit, curr - 1LL);
               }
           }
           else if(v[i - 1] > v[i])
           {
               limit = min(limit, curr - 1LL);
           }
           else if(v[i] == v[i-1])
           {
               max_ele = max(max_ele, curr + 1LL);
           }
        }
        // cout << limit << " " << max_ele << endl;

        

        if (flag == 1)
        {
            cout << -1 << endl;
            continue;
        }
        if(limit <= max_ele)
        {
            cout << -1 << endl;
            continue;
        }
        }
}

