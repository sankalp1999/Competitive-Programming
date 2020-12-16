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
       int n, s, k;
       cin >> n >> s >> k;
       vector<int> v(k);
       bool f = false;
       for (int i = 0; i < k; i++)
       {
           cin >> v[i];
           if(v[i] == s)
           {
               f = true;
           }
       }
       if(f == false)
       {
           cout << 0 << endl;
       }
       else
       {    
           
           sort(v.begin(), v.end());
           int pos = 0;
           for (int i = 0; i < v.size(); i++)
           {
               if(v[i] == s)
               {
                   pos = i;
                   break;
               }
           }
           int forward, backward;
           forward = backward = INT_MAX;
           int i = pos;
           while(i + 1 < v.size() && v[i] == v[i + 1] - 1)
           {
               i++;
           }
           
           if(v[i]<n)
           forward = abs(i - pos);

           i = pos;
           while(i - 1 >= 0 && v[i] == v[i - 1] + 1 )
           {
               i--;
           }
           if(v[i]>1)
           backward = pos - i;
           cout << min(backward, forward) + 1 << endl;
       }
      }
}

