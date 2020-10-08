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
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
   }
   sort(v.begin(), v.end(), greater<int>());
   // They just want the sum and
   // not the subsequence so I can just 
   // choose the elements
   lli sum = 0;
   lli max_till = INT_MIN;
   lli even_sum = INT_MIN;
   lli neg_sum = INT_MIN;
   int flag = 0;
   
   for (int i = 0; i < v.size(); i++)
   {
       if(v[i] > 0)
       {
           sum += v[i];
           max_till = max(sum, max_till); // Trying to get max possible. And then remove if
                // encounter with negative elemet
       }
       else if(v[i] < 0)
       {
 
           flag = 1;
           if (sum % 2 == 1)
           {
               cout << sum << endl;
               return 0;
               break;
           }
           for (int j = i - 1; j >= 0; j--)
           {
               if( (sum - v[j]) % 2 == 1 )
               {
                   even_sum = sum - v[j]; // The earlier the better.
                   break;
               }
           }
        //    cout << sum << endl;
            //   2 -3 -5
           for (int j = i; j < n; j++)
           {
               if( ( abs(sum + v[j]) ) % 2 == 1 )
               {
                   neg_sum = sum + v[j]; // The earlier the better because negative number gonna be small
                   break;
               }
           }
           
           cout << max(neg_sum, even_sum) << endl;
           return 0;
       }
   }
   if(flag == 0 && sum % 2 == 0)
   {
            for (int j = n - 1; j >= 0; j--)
           {
               if( (sum - v[j]) % 2 == 1 )
               {
                   even_sum = sum - v[j]; // The earlier the better.
                   break;
               }
           }
           cout << even_sum << endl;
           return 0;
   }

   cout << max_till << endl;
}