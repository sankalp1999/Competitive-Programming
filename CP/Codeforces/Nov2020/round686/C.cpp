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
       lli n;
       cin >> n;
       vector<lli> v(n);
       unordered_map<lli, lli> m;
       lli min_cont = INT_MAX;
       vector<int> segs;
       REP(i, n)
       {
           cin >> v[i];
        //    m[v[i]]++;
       }
       segs.push_back(v[0]);
       for (int i = 1; i < n; i++)
       {
           if(v[i] == segs.back())
               continue;
           else
           {
               segs.push_back(v[i]);
           }
        }

      if(segs.size() == 1)
      {
          cout << 0 << endl;
          continue;
      }

       unordered_map<lli, lli> cont;
       n = segs.size();
       for (int i = 0; i < n ; i++)
       {
            if(cont[segs[i]] == 0)
            {
                if(i == 0 || i == n - 1)
                {
                    cont[segs[i]]++; // if last, only one removal operation.
                }
                else
                {
                    cont[segs[i]] += 2;
                }
            }
            else
            {
                if(i != n - 1) // dont count since already one element is there.
                cont[segs[i]]++;

            }
       }
     
       for (auto it : cont)
       {
           min_cont = min(min_cont, it.second);
       }
       cout << min_cont << endl;
   }
}