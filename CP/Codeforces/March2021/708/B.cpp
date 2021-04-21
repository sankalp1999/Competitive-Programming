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
       lli n, m;
       cin >> n >> m;
       vector<lli> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       
       unordered_map<lli, lli> mapper;
       for (int i = 0; i < n; i++)
       {
           v[i] = v[i] % m;
           mapper[v[i]]++;
       }
      
       lli count = 0;
       if(m == 1)
       {
           cout << 1 << endl;
           continue;
       }

     
       for (int i = 0; i <= (m) / 2; i++)
       {
        // 0 will contribute only 1 case
        // while if i == m/2 and m - i == 
           if(i == 0 )
           {
               if(mapper[i] > 0)
               count++;
               continue;
           }

            if(m % 2 == 0 && i == m/2 )
            {
                if(mapper[i] > 0)
                {
                    count++;
                    mapper[i] = 0;
                }
                continue;
            }
           
           if(mapper[i] > 0 && mapper[m - i] > 0)
           {
               count++;
               int deduct =  min(mapper[i], mapper[m - i]);
            //    cout << "deduct" << deduct << endl;  


               if(mapper[i] > mapper[m - i ])
               {
                   mapper[i]--;
               }
               else if(mapper[i] < mapper[m - i])
                   mapper[m - i]--;

               mapper[i] -= deduct;
               mapper[m - i] -= deduct;
               count += mapper[i];
               count += mapper[m - i];
               mapper[i] = 0;
               mapper[m - i] = 0;
               

           }
           else if(mapper[i] > 0 || mapper[m - i] > 0)
           {
               count += mapper[i];
               
               count += mapper[m - i];
               mapper[i] = 0;
               mapper[m - i] = 0;
           }
           
       }
    //    count += rem;
       cout << count << endl;
   }
}