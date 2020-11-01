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

   vector<int> primes;
   unordered_set<int> p;
   for (int i = 2; i <= 100; i++)
   {
       int f = 0;
       for (int j = 2; j * j <= i; j++)
       {
           if(i % j == 0)
           {
               f = 1;
               break;
           }
       }
       if(f == 0)
       {
           primes.push_back(i);
           p.insert(i);
           //    cout << i << endl;
       }
   }

   int t;  
   cin >> t;
   
   
   while(t--)
   {
       int n;
       cin >> n;
       if(p.find(n) != p.end())
       {
           for (int i = 0; i < n; i++)
           {
               for (int j = 0; j < n; j++)
               {
                   cout << 1 << " ";
               }
               cout << endl;
             }
             continue;
       }
       int arr[n][n];
       memset(arr, 0, sizeof(arr));
       int k = 0;
       int j = 0;
       for (int i = 0; i < n; i++)
       {
           arr[k][j++] = 1;
           arr[k][j % n] = 12;
           k++;
        }
         for (int i = 0; i < n; i++)
           {
               for (int j = 0; j < n; j++)
               {
                   cout << arr[i][j] << " ";
               }
               cout << endl;
            }
   }
}