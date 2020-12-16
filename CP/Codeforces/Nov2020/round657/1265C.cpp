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
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       if(n <= 4)
       {
           cout << 0 << " " << 0 << " " << 0 << endl;
           continue;
       }
       vector<int> segs;
       int pt = 0;
       int i = 0;
       for (i = 1; i < n; i++)
       {
           if(v[i] != v[pt])
           {
               segs.push_back(i - pt);
               pt = i;
           }
       }
       segs.push_back(i - pt);

       int ma = n / 2;
       long long int sum = 0;
       sum = segs[0]; // All gold medal to highest score

       lli left = ma - sum;

       lli silver = 0;
       int j = 1;

       bool gone = false;
       while (silver <= sum)
       {
           if(left - segs[j] >= 0)
           {
           left = left - segs[j];
           
           silver += segs[j];
           }
           else
           {
               gone = true;
               break;
           }

           j++;
       }
       if(gone == true)
       {
           cout << 0 << " " << 0 << " " << 0 << endl;
           continue;
       }

       lli bronze = 0;
       while(left > 0)
       {
            if(left - segs[j] >= 0 )
            {
                bronze += segs[j];
                left = left - segs[j];
            }
            else
            {
                break;
            }

            j++;
       }

       if(left < 0 || bronze <= sum)
       {
           cout << 0 << " " << 0 << " " << 0 << endl;
           continue;
       }
       cout << sum << " " << silver << " " << bronze << endl;
   }
}

