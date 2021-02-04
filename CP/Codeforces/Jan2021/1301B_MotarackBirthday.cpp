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


// Our answer will be determined by the max absolute difference 
// since if we take average, distance from average will be maxmum in this case.

// Take all the elements that will be affected in the median array.
// Then take midpoint of the max and min value.



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
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       vector<int> median;
       for (int i = 0; i < v.size(); i++)
       {
           if(v[i] == -1)
           {
               continue;
           }
           if(i >= 1 && v[i - 1] == -1 || (i + 1 < v.size() && v[i + 1] == -1))
           {
                median.push_back(v[i]);
           }
       }
        if(median.empty())
        {
            cout << 0 << " " << 42 << endl;
            continue;
        }

       sort(median.begin(), median.end());
       int len = (int)median.size();
       int k;

       k = (median[0] + median.back()) / 2;
       int max_diff = 0;
       if(v[0] == -1)
       {
           v[0] = k;
       }
       for (int i = 1; i < (int)v.size(); i++)
       {
           if(v[i] == -1)
           {
               v[i] = k;
           }
           max_diff = max(max_diff, abs(v[i-1] - v[i]));
       }

           cout << max_diff << " " << k << endl;
   }
}
